var PythonShell = require('python-shell');


var runDeamon = function () {


	var options = {
	  mode: 'text'
	};


	PythonShell.run('core/Cardigan/mainPi.py', options, function (err, results) {
	  if (err) throw err;
	  // results is an array consisting of messages collected during execution 
	  console.log('results: %j', results);
	});

}


exports.runDeamon = runDeamon;