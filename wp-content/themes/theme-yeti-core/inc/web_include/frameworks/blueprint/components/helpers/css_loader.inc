<?php 
if (isset($__WEB_CONFIG["Framework"]["CSS"])) 
{
?>
<!-- Load up the framework CSS -->
<?php
    foreach ($__WEB_CONFIG["Framework"]["CSS"] as $aCSS)
    { 
?>
        <link rel="stylesheet" 
                type="text/css" 
                media="<?php echo $aCSS["media"]?>"
                href="<?php echo $aCSS["href"] ?>" />
<?php
    }
 }
?>
<?php 
if (isset($__WEB_CONFIG["Framework"]["CSS"])) 
{
?>
<!-- Load up the page and plugin specific CSS -->
<?php
    foreach ($__PAGE_CONFIG["CSS"] as $aCSS)
    { 
?>
        <link rel="stylesheet" 
                type="text/css" 
                media="<?php echo $aCSS["media"]?>"
                href="<?php echo $aCSS["href"] ?>" />
<?php
    }
 }
?>
