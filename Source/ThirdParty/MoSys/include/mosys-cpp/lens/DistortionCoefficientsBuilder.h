#pragma once
/***********************************************
Header file of the DistortionCoefficientsBuilder class
Handles 1xN tables but the tables have to be defined as 2d.
Use the class by using LoadLensCalJson(std::string& data) function to read and set all the distortion tables
and GetDistortionCoefficientsForLensData(float focus, float zoom, LensParameters& result) to retrieve the coefficients.
To modify the lens file use InsertCoefficients(LensParameters& new_values) to insert new values and then SaveLensCalJson(std::string& data)
to generate a new lens file.
************************************************/

#include <cmath>
#include <fstream>
#include <string>
#include <vector>
#include <memory>

//# define SIZE_MED_VECTOR    256

struct JsonRef;

struct LensParameters;

namespace SPLINTER
{
	class BSpline;
	class DataPoint;
}

struct Interval {
	size_t count;
	float* intervals;
	float val;
	float last_val;
	float offset;
	unsigned int  start;
	unsigned int end;
};

struct DistortionTable {
	std::vector<float> focus;
	std::vector<float> zoom;
	std::vector<std::vector<float>> value;
};

struct DistortionTables {

	DistortionTable  FxUndist_table_smoothed;
	DistortionTable  FxDist_table_smoothed;
	DistortionTable	 FxUndist_table_raw;
	DistortionTable  FxDist_table_raw;
	DistortionTable  K1_table_smoothed;
	DistortionTable  K1_table_raw;
	DistortionTable  K2_table_smoothed;
	DistortionTable  K2_table_raw;
	DistortionTable  K3_table_smoothed;
	DistortionTable  K3_table_raw;
	DistortionTable  P1_table_raw;
	DistortionTable  P2_table_raw;
	DistortionTable  P1_table_smoothed;
	DistortionTable  P2_table_smoothed;
	DistortionTable  EPD_table_smoothed;
	DistortionTable  EPD_table_raw;
	DistortionTable  Cx_table_smoothed;
	DistortionTable  Cx_table_raw;
	DistortionTable  Cy_table_smoothed;
	DistortionTable  Cy_table_raw;
	DistortionTable  Pan_offset_table_raw;
	DistortionTable	 Tilt_offset_table_raw;
	DistortionTable	 Roll_offset_table_raw;
	DistortionTable  TP_right_offset_table_raw;
	DistortionTable  TP_up_offset_table_raw;
	DistortionTable  Focal_dist_table_raw;
	DistortionTable  Focal_dist_table_smoothed;

};

struct LensFileDescription {
	std::string lensName;
	std::string lensManufacturer;
	std::string lensSerialNumber;
	std::string lensType;
	std::string cameraManufacturer;
	std::string cameraModel;
	std::string cameraMode;
	std::string aspectRatio;
	std::string cameraSerialNumber;
	std::string shortDescription;
	std::string comments;
	std::string extender;
	std::string extenderSource;
};

struct LensSetup {
	float undistFxScale = 1;
	float undistFxOffset = 0;
	float distFxScale = 1;
	float distFxOffset = 0;
	float cxScale = 1;
	float cyScale = 1;
	float cxOffset = 0;
	float cyOffset = 0;
	float cxSlope = 0;
	float cySlope = 0;
	float EPDOffset = 0;
	float EPDScale = 1;
	LensFileDescription description;
};

struct STOffsets {
	float pan_offset;
	float tilt_offset;
	float roll_offset;
	float TP_right_offset;
	float TP_up_offset;
};

enum class Interpolation { smoothed, linear, none };

enum class TableType
{
	full,
	focus,
	zoom,
	none
};
namespace mosys
{
	class DistortionCoefficientsBuilder {
	public:

		using MoSysSplinePointer = std::shared_ptr<SPLINTER::BSpline>;
		
		static mosys::DistortionCoefficientsBuilder* CreateDistortionCoefficientsBuilder();

		static void DestroyDistortionCoefficientsBuilder(mosys::DistortionCoefficientsBuilder* ptr);

		/*Returns the distortion coefficients for zoom and focus value
		@param focus Focus value of the lens data (0-65535)
		@param zoom Zoom value of the lens data (0-65535)
		@param result Reference to an instance of LensParameters type struct where results are going to be stored
		@return fail output
		if 1, data is valid
		if 0, loading of lens file failed, data is not valid
		*/
		bool GetDistortionCoefficientsForLensData(float focus, float zoom, LensParameters& result);

		/*Returns the model of lens as read from json lens file
		@return std:string type variable containing the model of lens
		*/
		std::string GetLensName() const;

		/*Returns the manufacturer name of lens from the json lens file
		@return std::string type variable containing the manufacturer name of lens
		*/
		std::string GetLensManufacturer() const;

		/*Returns the serial number of lens from the json lens file
		@return std::string type variable containing the serial number of lens
		*/
		std::string GetLensSerialNumber() const;

		/*Returns the manufacturer name of camera used for calibration
		@return std::string type variable containing the camera manufacturer name
		*/
		std::string GetCameraManufacturer() const;

		/*Returns the model name of camera used for calibration
		@return std::string type variable containing the camera model name
		*/
		std::string GetCameraModel() const;


		/*Returns the mode of camera used for calibration
		@return std::string type variable containing the camera mode
		*/
		std::string GetCameraMode() const;

		/*Returns the model name of camera used for calibration
		@return std::string type variable containing the camera model name
		*/
		std::string GetCameraSerialNumber() const;

		/*Returns extra information about the calibration from the lens file (if found)
		@return std::string type variable containing short description
		*/
		std::string GetShortDescription() const;

		/*Returns date of the when the lens file was generated
		@return std:string type variable containing date of lens file
		*/
		std::string GetLensFileDate() const;

		/*Returns version of the lens file read
		@return std::string type variable containing the major and minor version of the lens file
		*/
		std::string GetLensFileVersion() const;

		/*Returns type of the lens from the json lens file
		@return std:string containing lens type
		Possible values:
			"ZO" - Zoom,
			"PR" - Prime,
			"AN" - Anamorphic
		*/
		std::string GetLensType() const;

		/*Returns lens file description structure read from the lens file
		@return LensFileDescription structure containing lens and camera names
		*/
		LensFileDescription GetLensFileDescription() const; 

		/*Returns comments from the lens file
		@return std::string value containing comments from the lens file loaded
		*/
		std::string GetComments() const;

		/*@return bool value specifying whether loaded lens file is auto calibrated
		if true, lens file is auto calibrated
		if false, lens file is not auto calibrated
		*/
		bool IsAutoCalibrated() const;

		/*@return bool value specifying whether loaded lens file is tweaked
		if true, lens file is tweaked
		if false, lens file is not tweaked
		*/
		bool IsTweaked() const;

		/*@return bool value specifying whether loaded lens file is releasable
		if true, lens file is releasable
		if false, lens file is not releasable
		*/
		bool IsReleasable() const;

		/*Returns score of the lens file loaded (out of 10).
		@return int value specifying quality score of lens file
		*/
		int GetFileScore() const;

		/*@return std::string specifying the lens extender status
		Possible values:
			"Not Available", Extender not available.
			"Unknown", Extender valid, but if not 1x, exact multiplier unknown.
			"x0.8",
			"x1.2",
			"x1.4",
			"x1.5",
			"x1.6",
			"x2.0"
		*/
		std::string GetLensExtender() const;


		/*Returns aspect ratio of the camera
		@return std::string containing aspect ratio of camera
		*/
		std::string GetAspectRatio() const;

		/*Returns zoom and focus points (in percentages) of currently loaded file
		@param OutZoomPoints output list of zoom points
		@param OutFocusPoints output list of focus points
		*/
		void GetSamplePoints(std::vector<float>& OutZoomPoints, std::vector<float>& OutFocusPoints) const;

		/* Returns currently loaded focal distance table
		* @param OutFocalDistanceFocusValues output list of focus values in focal distance table
		* @param OutFocalDistances output list of focal distances in focal distance table
		*/
		void GetFocalDistanceTable(std::vector<float>& OutFocalDistanceFocusValues, std::vector<float>& OutFocalDistances) const;


		/*Reads the std::string containing the lens file, sets the distortion tables
		@param data Reference to std::string containing the lens file
		@return fail output
		if 1, loading successful
		if 0, loading failed
		*/
		bool LoadLensCalJson(std::string& data);

		/*Set the type of interpolation to use
		@param interp Enumeration type variable determining type of interpolation
		if interp=smoothed, use tables of smoothed values and interpolate linearly
		if interp=  linear, use tables of raw values and interpolate linearly
		if interp=   none,  no interpolation, find the closest value from the table
		*/
		void SetInterpolationType(Interpolation interp);

		/* Saves current distortion tables to a std::string
		@param data Output parameter of type std::string
		@return fail output
		if 1, saving successful
		if 0, saving failed
		*/
		bool SaveLensCalJson(std::string& data);

		/* Updates the distortion tables by inserting new values to the closest location in the table for current zoom and focus
		@param new_values Reference to a structure of distortion coefficients to be written
		@return fail output
		if 1, values inserted successfully
		if 0, failure
		*/
		bool InsertCoefficients(const LensParameters& new_values);

		/* Sets the lens setup parameters to be applied to a lens file
		@param newSetup Reference to a structure containing scales, offsets and lens file description
		*/
		void SetLensSetup(LensSetup& newSetup);

		/* Sets the lens description based on currently loaded lens file
		*/
		void SetLensDescriptionFromLoadedFile();

		/*Set StarTracker offsets.
		@param offsets Reference to STOffsets stucture containing offset values
		*/
		void SetSTOffsets(STOffsets& offsets);

		/*Define lens file as releasable. Output lens file will have "Is releasable" flag
		set to true
		*/
		void SetReleasable();

		/*Define lens file as not releasable. Output lens file will have "Is releasable" flag
		set to false
		*/
		void SetNotReleasable();

		/*Set lens file score. Evaluate quality of calibration by giving lens file a score (1 to 10).
		@param score Integer value of score given
		*/
		void SetFileScore(unsigned int score);

		/*Set comments about the calibration.
		@param comments std::string type variable containing comment text
		*/
		void SetComments(std::string comments);

		/* Inserts new row/column of samples into the table based on current zoom/focus position
		@return fail output
		if 1, samples inserted successfully
		if 0, failure
		*/
		bool InsertNewSample();

		/* Redo smoothing and update smoothed distortion tables
		@return fail output
		if 1, tables updated successfully
		if 0, failure
		*/
		bool UpdateSmoothedTables();

		/* Enable smoothing on distortion coefficients. If no smoothed data exists - apply smoothing
			and fill the tables
		@return fail output
		if 1, enabled successfully
		if 0, failure
		*/
		bool EnableWeightedDistortion();

		/* Enable smoothing on entrance pupil distance. If no smoothed data exists - apply smoothing
			and fill the tables
		@return fail output
		if 1, enabled successfully
		if 0, failure
		*/
		bool EnableSmoothedEPD();

		/* Enable smoothing on centre shift. If no smoothed data exists - apply smoothing
			and fill the tables
		@return fail output
		if 1, enabled successfully
		if 0, failure
		*/
		bool EnableSmoothedCxCy();

		/* Disable smoothing on distortion coefficients
		*/
		void DisableWeightedDistortion();

		/* Disable smoothing on entrance pupil distance
		*/
		void DisableSmoothedEPD();

		/* Disable smoothing on centre shift
		*/
		void DisableSmoothedCxCy();

		/* Clear focal distance tables*/
		void ClearFocalDistance();

		/* Check if loaded file has focal distance
		@return check result
		if 1, has focal distance
		if 0, no focal distance*/
		bool HasFocalDistance();

		/* Adds a new focal distance point to end of array
		@param focusValue Focus value of the lens data (0-65535)
		@param focalDistance Focal distance (m)
		@return fail output
		if 1, point added successfully
		if 0, failed to add point*/
		bool AddFocalDistancePoint(float focusValue, float focalDistance);

		/* Reverses lens data across zoom
		@return fail output
		if 1, success
		if 0, failure
		*/
		bool ReverseZoomInLensFile();

		/* Reverses lens data across focus
		@return fail output
		if 1, success
		if 0, failure
		*/
		bool ReverseFocusInLensFile();

		/* Resets scales/offsets to their default values */
		void ResetGlobalTweaks();

		/* Should compute FxDistorted, K1 and K2 from FxUndist. Used to improve smoothing
		@param ShouldCompute If true, will re-compute distortion on smoothing
		*/
		void SetShouldComputeDistortionFromFxUndist(bool ShouldCompute);

		/* Returns whether ComputeDistortionFromFxUndist is enabled or not*/
		bool GetShouldComputeDistortionFromFxUndist();

		/* Adds a new value to Fx Tweak table
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@param origFx Original fx value computed by applying linear near wide tweaks to lens file value
		@param newFx Tweaked Fx value
		*/
		void AddFxTweakNearWide(float zoomValueTicks, float origFx, float newFx);

		/* Adds a new value to Cx  Tweak table
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@param origCx Original cx value computed by applying linear near wide tweaks to lens file value
		@param newCx Tweaked Cx value
		*/
		void AddCxTweakNearWide(float zoomValueTicks, float origCx, float newCx);

		/* Adds a new value to Cy Tweak table
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@param origCy Original cy value computed by applying linear near wide tweaks to lens file value
		@param newCy Tweaked Cy value
		*/
		void AddCyTweakNearWide(float zoomValueTicks, float origCy, float newCy);

		/* Adds a new value to EPD Tweak table
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@param origEPD Original EPD value computed by applying linear near wide tweaks to lens file value
		@param newEPD Tweaked EPD value
		*/
		void AddEPDTweakNearWide(float zoomValueTicks, float origEPD, float newEPD);

		/* Removes a tweak from the Fx Tweak table given its zoom value
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@return bool type value indicating whether the point was removed or not
		*/
		bool RemoveFxTweakNearWide(float zoomValueTicks);

		/* Removes a tweak from the Cx Tweak table given its zoom value
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@return bool type value indicating whether the point was removed or not
		*/
		bool RemoveCxTweakNearWide(float zoomValueTicks);

		/* Removes a tweak from the Cy Tweak table given its zoom value
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@return bool type value indicating whether the point was removed or not
		*/
		bool RemoveCyTweakNearWide(float zoomValueTicks);

		/* Removes a tweak from the EPD Tweak table given its zoom value
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@return bool type value indicating whether the point was removed or not
		*/
		bool RemoveEPDTweakNearWide(float zoomValueTicks);

		/* Clears near wide tweak tables and splines*/
		void ClearNearWideSplines();

		/* Generates Fx spline from near wide tweak data tables
		@return bool type value indicating whether spline was generated or not
		*/
		bool GenerateFxSplineNearWide();
		
		/* Generates Cx spline from near wide tweak data tables
		@return bool type value indicating whether spline was generated or not
		*/
		bool GenerateCxSplineNearWide();

		/* Generates Cy spline from near wide tweak data tables
		@return bool type value indicating whether spline was generated or not
		*/
		bool GenerateCySplineNearWide();

		/* Generates EPD spline from near wide tweak data tables
		@return bool type value indicating whether spline was generated or not
		*/
		bool GenerateEPDSplineNearWide();

		/* Get Fx spline value for near wide tweak at given zoom
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@return Fx spline value
		*/
		float GetFxSplineValue(float zoomValueTicks);

		/* Get Cx spline value for near wide tweak at given zoom
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@return Cx spline value
		*/
		float GetCxSplineValue(float zoomValueTicks);

		/* Get Cy spline value for near wide tweak at given zoom
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@return Cy spline value
		*/
		float GetCySplineValue(float zoomValueTicks);

		/* Get EPD spline value for near wide tweak at given zoom
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@return EPD spline value
		*/
		float GetEPDSplineValue(float zoomValueTicks);

		/* Set the number of basis splines for near wide tweak splines
		@param num Number of basis splines
		*/
		void SetNumOfBasisSplinesForNearWide(float num);

		/* Set the alpha parameter value for near wide tweak splines
		@param alpha Alpha parameter value
		*/
		void SetAlphaForNearWide(float alpha);

		DistortionTables Disttables;

		virtual ~DistortionCoefficientsBuilder(){}

	private:
		/* Reads the lens file data from version 0 lens files, sets the distortion tables
		@param file Reference to json type variable containing the lens file data
		@return fail output
		if 1, loading successful
		if 0, loading failed
		*/
		bool loadDataVersion0(JsonRef file);

		/* Reads the lens file data from version 1 lens files, sets the distortion tables
		@param file Reference to json type variable containing the lens file data
		@return fail output
		if 1, loading successful
		if 0, loading failed
		*/
		bool loadDataVersion1(JsonRef file);

		/*Finds the interval which zoom or focus value falls into
		@param interval Reference to an instance of Interval type struct containing pointer to the zoom or focus array, size of the array
		and the zoom or focus value of the lens. The results are going to be stored in the same structure
		*/
		void findInterval(Interval& interval);

		/*Returns linearly interpolated distortion coefficient value for the zoom and focus intervals given
		@param table Reference to DistortionTable type structure instance
		@param zoominterval Reference to Interval type structure instance for zoom
		@param focusinterval Reference to Interval type structure instance for focus
		@return float type value of the coefficient
		*/
		float interpolate(DistortionTable& table, Interval& zoominterval, Interval& focusinterval);


		/* Access the value in the distortion table read from json
		@param file Reference to json type variable containing the lens file data
		@param name Name of coefficient
		@param i Row number of the distortion table
		@param j Column number of the distortion table
		@param x Determines whether to return zoom, focus or coefficient value
		if x=0 returns zoom
		if x=1 returns focus
		if x=2 returns the coefficient value (default)
		@return float type value of the element from the table
		*/
		float getTableValueV0(JsonRef file, const char* name, int i, int j, int x = 2);

		/* Access the value in the distortion table read from json
		@param file Reference to json type variable containing the lens file data
		@param name Name of coefficient
		@param i Row number of the distortion table
		@param j Column number of the distortion table
		@param type String which specifies the type of table
		if type = "Raw" reads from raw sized table
		if type = "Smoothed" reads from smoothed sized table
		@param x Determines whether to return zoom, focus or coefficient value
		if x=0 returns zoom
		if x=1 returns focus
		if x=2 returns the coefficient value (default)
		@return float type value of the element from the table
		*/
		float getTableValue(JsonRef file, const char* name, int i, int j, std::string type, int x = 2);

		/* Returns the closest value from the table for latest zoom and focus positions
		@param table Reference to DistortionTable type structure instance
		@return float type value of the element from the table
		*/
		float findClosestValue(DistortionTable& table);

		/* Returns indices of raw tables for latest zoom and focus postions
		@param zoomindex Reference to unsigned int type variable to store zoom index
		@param focusindex Reference to unsigned int type variable to store focus index
		*/
		void findIndices(unsigned int& zoomindex, unsigned int& focusindex);

		/* Returns the closest value from the focal distance table for latest zoom and focus positions
		@param table Reference to DistortionTable type structure instance
		@return float type value of the element from the table
		*/
		float findClosestFocalDistance(DistortionTable& table);

		/* Returns zero valued base B-spline that can be used to get fitted splines for distortion coefficients

		*/
		MoSysSplinePointer GetBaseBSpline();

		/* Adds or replaces tweak point in near wide tweak table
		@param table Reference to vector of float type vectors containing current tweak points
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@param origParamValue Original parameter value computed by applying linear near wide tweaks to lens file value
		@param newTweakedValue Tweaked value
		*/
		void addOrReplaceTweakPointInTable(std::vector<std::vector<float>>& table, float zoomValueTicks, float origParamValue, float newTweakedValue);

		/* Removes tweak point from near wide tweak table
		@param table Reference to vector of float type vectors containing current tweak points
		@param zoomValueTicks Zoom value of the lens data (0-65535)
		@return bool type value indicating whether the point was removed or not
		*/
		bool removeTweakPointFromTable(std::vector<std::vector<float>>& table, float zoomValueTicks);

		/* Generates a spline for given data table
		@param table Reference to vector of float type vectors containing current tweak points
		@return shared pointer to SPLINTER::BSpline type object
		*/
		MoSysSplinePointer generateSplineForTweakPoints(std::vector<std::vector<float>>& table);

		std::string lens_name = "";
		std::string lens_manufacturer = "";
		std::string lens_serial_number = "";
		std::string camera_manufacturer = "";
		std::string camera_model = "";
		std::string camera_mode = "";
		std::string aspect_ratio = "";
		std::string camera_serial_number = "";
		std::string short_description = "";
		std::string lens_file_date = "";
		std::string comments_ = "";
		std::string extender_ = "Not Available";
		std::string extender_source_ = "Manual";
		std::string lens_type = "";
		bool isAutoCalibrated_ = true;
		bool isTweaked_ = false;
		bool isReleasable_ = false;
		int fileScore_ = 0;
		int major_version{};
		int minor_version{};

		unsigned int num_focus{};
		unsigned int num_zoom{};
		unsigned int num_focus_raw{};
		unsigned int num_zoom_raw{};
		unsigned int num_focus_focaldist{};
		unsigned int num_focus_focaldist_raw{};

		Interval focusInterval{ 0 };
		Interval zoomInterval{ 0 };
		Interval focusIntervalRaw{ 0 };
		Interval zoomIntervalRaw{ 0 };
		Interval focusIntervalFocalDist{ 0 };
		Interval focusIntervalFocalDistRaw{ 0 };
		Interval zoomIntervalFocalDist{ 0 };

		bool weighted_distortion_ = false;
		bool smoothed_epd_ = false;
		bool smoothed_cxcy_ = false;
		bool smoothed_fx_ = false;
		bool smoothed_focaldist_ = false;
		bool smoothed_p1p2_ = false;
		bool recomputeDistortionFromFxUndist_ = false;

		bool isValid_ = false;
		bool k3valid_ = false;
		bool p1p2valid_ = false;
		bool STOffsetsValid_ = false;
		bool focalDistValid_ = false;
		float minFocalDistValue_ = 0.f;
		Interpolation interp_ = Interpolation::smoothed;
		LensSetup setup_;
		TableType lensFileTableType_ = TableType::none;

		// Data tables for Near-Wide tweak
		std::vector<std::vector<float>> fxDataPointsNearWide_;
		std::vector<std::vector<float>> EPDDataPointsNearWide_;
		std::vector<std::vector<float>> cxDataPointsNearWide_;
		std::vector<std::vector<float>> cyDataPointsNearWide_;

		// BSplines for Near-Wide tweak
		MoSysSplinePointer fxSplineNearWide_ = nullptr;
		MoSysSplinePointer cxSplineNearWide_ = nullptr;
		MoSysSplinePointer cySplineNearWide_ = nullptr;
		MoSysSplinePointer EPDSplineNearWide_ = nullptr;

		float numOfBasisSplinesNearWide_ = 35;
		float alphaNearWide_ = 0.01f;

	};
}

