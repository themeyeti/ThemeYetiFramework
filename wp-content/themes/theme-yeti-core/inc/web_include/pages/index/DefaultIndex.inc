<?php
// Load up the configuration
global $__YETI_CONTEXT;
global $__PAGE_CONTEXT;

/* 
 * Context is stored at runtime, and contains all the configuration for the 
 * page to run. Page-specific context is stored in the $__PAGE array.
 * For example, to access a Page's type, you would do:
 * echo $__YETI_CONTEXT["__PAGE"]["Type"];
 */ 
?>

<?php 
?>
<html>
<head><title>I'm a theme</title></head>
<body>
<p>I'm the body</p>
<p>
<?php 
echo $__PAGE_CONTEXT["PageType"];
?>
</p>
</body>
</html>