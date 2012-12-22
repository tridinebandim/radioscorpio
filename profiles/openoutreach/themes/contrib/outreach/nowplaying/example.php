<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head profile="http://gmpg.org/xfn/11">
<title>Icecast Now Playing Script</title>
<script type='text/javascript' charset='utf-8' src='http://ajax.googleapis.com/ajax/libs/jquery/1.4/jquery.min.js'></script>
</head>
<body>
<?php
include('icecast.php');
echo "Speelt nu: " . $stream['info']['artist'] . " - " . $stream['info']['song'];
?>

</body>
</html>

