<?php 
global $__WEB_CONFIG, $_PAGE_CONFIG;

if (isset($__WEB_CONFIG["Framework"]["JS"])) 
{
?>
<!-- Load up the framework js -->
<?php
    foreach ($__WEB_CONFIG["Framework"]["JS"] as $strJSFile)
    { 
?>
        <script type="text/javascript" 
                src="<?php echo $strJSFile ?>"></script>
<?php
    }
 }
?>
<?php 
if (isset($__WEB_CONFIG["Framework"]["JS"])) 
{
?>
<!-- Load up the page and plugin specific js -->
<?php
    foreach ($__PAGE_CONFIG["JS"] as $strJSFile)
    { 
?>
        <script type="text/javascript" 
                src="<?php echo $strJSFile ?>"></script>
<?php
    }
 }
?>
