<?php
/********************************************************************
 * ==================================================================
 * CORE YETI CONFIGURATION - TO BE CALLED YetiScript ONCE COMPLETE
 * IDEALLY 90%+ OF EVERY THEME WILL BE CONTAINED WITHIN THIS FILE
 * 
 * Goals
 * 1) Easy-to-edit file containing descriptive configuration
 * 2) Provie a one-stop shop for managing the entire theme
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 *******************************************************************/

/********************************************************************
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * DON'T EDIT YET UNLESS YOU KNOW WHAT YOU'RE DOING. THE BELOW SHOULD
 * BE UNIVERSAL NEARLY 100% OF THE TIME. I'LL TELL YOU WHEN IT'S SAFE
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 *******************************************************************/

/**
 * Core Configuration
 * Location: $__YETI_CONFIG
 * @var array
 */
$aCoreConfig = array();

/**
 * Web Configuration
 * Stores global page/ui
 * Location: $__YETI_CONFIG['__WEB']
 */
$aWebConfig = array();

/**
 * Pages Configuration
 * Stores configurations for each page type
 * Location: $__YETI_CONFIG['__WEB']['__PAGES']
 */
$aPagesConfig = array();

/********************************************************************
 * Standard Core Configuration Values
 *******************************************************************/
 /**
 * DidLoad specifies whether configuration has loaded. 
 * 
 * Example usage: To prevent us from loading configuration twice in 
 *                an application. Should always be true.
 * @var bool
 */
$bDidLoad = true;

// Let's push all the configuration into the Core Configuration array
$aCoreConfig["DidLoad"] = $bDidLoad;

// What has been set, must be unset
unset($bDidLoad);

/********************************************************************
 * Standard Core->Web Configuration Values
*******************************************************************/
/**
 * Frameworks provide basic building blocks for the theme, providing
 * standard HTML, CSS, etc., primarily in a structural context.
 * Possible values:
 * o blueprint
 * @var string
 */
$strWebFramework = "blueprint";
$strWebFrameworkConfig = dirname(__FILE__) . "/../web_include/frameworks/blueprint/blueprint_config.inc";
$strBootstrapPageLocation = "frameworks/index.inc";

// Let's push all the configuration into the web configuration array
$aWebConfig["WebFramework"] = $strWebFramework;
$aWebConfig["WebFrameworkConfig"] = $strWebFrameworkConfig;
$aWebConfig["BootstrapPageLocation"] = $strBootstrapPageLocation;

// Let's set the current array in the core configuration
$aCoreConfig["__WEB"] = $aWebConfig;

// What has been set, must be unset
unset($strWebFramework,
        $strBootstrapPageLocation);

/********************************************************************
 * Standard Core->Web->Pages Configuration Values
*******************************************************************/

// Wordpress pre-defines what pages we need for us. Yay!
$aIndexPage = array();
$a404Page = array();
$aSearchPage = array();
$aTaxonomyPage = array();
$aFrontPage = array();
$aHomePage = array();
$aAttachmentPage = array();
$aSinglePage = array();
$aPagePage = array();
$aCategoryPage = array();
$aTagPage = array();
$aAuthorPage = array();
$aDatePage = array();
$aArchivePage = array();
$aCommentsPopupPage = array();
$aPagedPage = array();

// Index Page Configuration
$strIndexPageType = "index";
$strIndexPageFileName = "index.inc";
$strIndexPageHeadFileName = "head.inc";
$strIndexPageBodyFileName = "body.inc";
$strIndexPageTitle = "Index Page Title";

// Let's push all index page configuration
$aIndexPage["PageType"] = $strIndexPageType;
$aIndexPage["DefaultFileName"] = $strIndexPageFileName;
$aIndexPage["PageHeadFileName"] = $strIndexPageHeadFileName;
$aIndexPage["PageBodyFileName"] = $strIndexPageBodyFileName;
$aIndexPage["PageTitle"] = $strIndexPageTitle;

// Let's set the Index Array in the Pages config
$aPagesConfig['INDEX'] = $aIndexPage;

// What has been set, must be unset
unset($strIndexPageFileName,
        $strIndexPageType,
        $strIndexPageHeadFileName,
        $strIndexPageBodyFileName,
        $strIndexPageTitle);



/*********************************************************************
 * BE FREE. IT IS SAFE TO EDIT THE BELOW AND RELEASE YOUR INNER YETI
 ********************************************************************/

/**************
 * MODULES
 **************/

/**************
 * FRAMEWORKS
 **************/

/********************************************************************
 * Persisting the configuration to $GLOBALS
 *******************************************************************/
$aWebConfig['__PAGES'] = $aPagesConfig;
$aCoreConfig['__WEB'] = $aWebConfig;
// Setting the global
$GLOBALS['__YETI_CONFIG'] = $aCoreConfig;

// That was fun! Let's unset all our gar-bage
unset($aCoreConfig,
          $aWebConfig,
          $aPagesConfig);