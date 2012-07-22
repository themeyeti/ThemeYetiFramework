<?php
require_once ("inc/web_include.inc");
/**
 * The main index file
 * 
 * We first get control of the application in these top-level files 
 * (e.g. index.php). From here, we load up the Theme Yeti framework,
 * including configuration, assets, styles, and more
 * 
 * @package ThemeYeti
 * @subpackage Core
 * 
 */

/* 
 * We do two things here:
 * 1) Create our Yeti Page, which will bring all our Yeti awesomeness into context
 * 2) Render the page as HTML
 */
/**
 * The Yeti Index page provides everything needed to load the index template
 *
 */
 class Yeti404Page extends YetiPage
 {
    function __construct()
    {
        $this->loadConfig();
        parent::__construct($GLOBALS["__YETI_CONTEXT"]["__WEB"]["__PAGES"]
                ["404"]);
    }
 }
 
 // Let's render it!
$oPage = new Yeti404Page();
$oPage->render();
