function solution(input) {
    var output = "";
    var currentMaxTemperatureCityName = "";
    var currentMaxTemperatureCityTemperature = -101.0;
    var currentMinTemperatureCityName = "";
    var currentMinTemperatureCityTemperature = 101.0;
    var currentMaxHumidityCityName = "";
    var currentMaxHumidityCityHumidity = -0.1;
    var currentMinHumidityCityName = "";
    var currentMinHumidityCityHumidity = 101.0;
    var currentStr;
    var averageTemperature = 0.0;
    var averageHumidity = 0.0;

    for (var i = 0; i <= input.length - 1; i++) {
        currentStr = input[i].split(/\s+/);

        // Max temperature check
        if (parseFloat(currentStr[1]) > currentMaxTemperatureCityTemperature)
        {
            currentMaxTemperatureCityName = currentStr[0];
            currentMaxTemperatureCityTemperature = parseFloat(currentStr[1]);
        }

        // Min temperature check
        if (parseFloat(currentStr[1]) < currentMinTemperatureCityTemperature)
        {
            currentMinTemperatureCityName = currentStr[0];
            currentMinTemperatureCityTemperature = parseFloat(currentStr[1]);
        }

        // Max humidity check
        if (parseFloat(currentStr[2]) > currentMaxHumidityCityHumidity)
        {
            currentMaxHumidityCityName = currentStr[0];
            currentMaxHumidityCityHumidity = parseFloat(currentStr[2]);
        }

        // Min humidity check
        if (parseFloat(currentStr[2]) < currentMinHumidityCityHumidity)
        {
            currentMinHumidityCityName = currentStr[0];
            currentMinHumidityCityHumidity = parseFloat(currentStr[2]);
        }

        // Add temp to average
        averageTemperature += parseFloat(currentStr[1]);

        // Add humidity to average
        averageHumidity += parseFloat(currentStr[2]);
    }

    // Calculate averages
    averageTemperature = averageTemperature / input.length;
    averageHumidity = averageHumidity / input.length;

    var outputMaxTempCity = "Max temperature " + currentMaxTemperatureCityName + " " + currentMaxTemperatureCityTemperature.toFixed(2);
    var outputMinTempCity = "Min temperature " + currentMinTemperatureCityName + " " + currentMinTemperatureCityTemperature.toFixed(2);
    var outputMaxHumidity = "Max humidity " + currentMaxHumidityCityName + " " + currentMaxHumidityCityHumidity.toFixed(2);
    var outputMinHumidity = "Min humidity " + currentMinHumidityCityName + " " + currentMinHumidityCityHumidity.toFixed(2);
    var outputAvg = "Average temperature/humidity " + averageTemperature.toFixed(2) + "/" + averageHumidity.toFixed(2);

    console.log(outputMaxTempCity);
    console.log(outputMinTempCity);
    console.log(outputMaxHumidity);
    console.log(outputMinHumidity);
    console.log(outputAvg)
}
