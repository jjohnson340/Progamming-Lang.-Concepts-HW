<p id="demo">0</p>
<script>

document.getElementById("demo").innerHTML = getNum();;

function getNum()
{

	var num1 = 17, num2 = 34;

	function add()

	{

		var num3 = 8;

		function add1()

		{

		function add2()

		{

		var num4 = 10;

		return 'Current Num: ' +(num1 + num2 + num3 + num4);

		}

		return add2();

		}

		return add1();

		}

		return add();

}

</script>