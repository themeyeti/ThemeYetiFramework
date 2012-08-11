<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<?php
// Load up the configuration
global $__WEB_CONFIG, $__PAGE_CONFIG;

/* 
 * Configuration is stored at runtime, and contains all the configuration for the 
 * page to run. Page-specific context is stored in the $__PAGE array.
 * For example, to access a Page's type, you would do:
 * echo $__YETI_CONFIG["__PAGE"]["Type"];
 */ 
?>
<?php include_once ($__WEB_CONFIG["WebFramework"] . "/components/" .
                        $__PAGE_CONFIG["PageHeadFileName"]); ?>
<?php include_once ($__WEB_CONFIG["WebFramework"] . "/components/" .
                        $__PAGE_CONFIG["PageBodyFileName"]); ?>
</html>