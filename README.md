## Synopsis

This project is (or aims to be):

1. A solution to the [Problem B](http://cad-contest-2016.el.cycu.edu.tw/problem_B/default.html) of the ICCAD 2016 Contest.

2. A verilog netlist parser.

4. A verilog netlist nand-synthesizer and JIT compiler, for very fast simulation.

5. A ***ORBDD*** (Ordered Reduced Binary Decision Diagrams) creation and manipulation framework. ORBDD represent combinational circuits in canonical form, that is, the ORBDDs of equivalent predicates are equal. For this reason, ORBDDs are specialy useful to check equivalence of combinational circuits.


## Code Examples

Since the project is in its beginnings, there is not much in this section.


## Motivation

Testing circuits is not easy and we need more tools to do it.

## Usage

Nothing much can be done yet.

## API Reference

Since API is not yet defined, it is not wise yet to publish it.

## Installation

This projects aims to reduce the amount of depencies to the most. However it needs cmake and boost spirit 3.0.

To compile it, run the following commands:

```
cmake .
make
```

## Benchmarks

We are using ICCAD 2015 and ICCAD 2016 inputs as benchmarks. They are carachterized in the following table:


##BENCHMARK'S TABLE
|TEST|GATES|INPUTS|OUTPUTS|FUNCTION|AND|NAND|OR|NOR|XOR|XNOR|NOT|BUF|
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
|in_2.v|4|3|1|6|0(0.00%)|4(66.67%)|1(16.67%)|0(0.00%)|0(0.00%)|0(0.00%)|0(0.00%)|1(16.67%)|
|in_1.v|4|3|1|7|0(0.00%)|2(28.57%)|2(28.57%)|0(0.00%)|0(0.00%)|0(0.00%)|2(28.57%)|1(14.29%)|
|in_2.v|185|56|129|14409|1412(9.80%)|1726(11.98%)|1040(7.22%)|460(3.19%)|992(6.88%)|100(0.69%)|2374(16.48%)|6305(43.76%)|
|in_1.v|185|56|129|10083|4404(43.68%)|0(0.00%)|1150(11.41%)|286(2.84%)|2426(24.06%)|314(3.11%)|199(1.97%)|1304(12.93%)|
|in_2.v|4|3|1|6|1(16.67%)|4(66.67%)|0(0.00%)|0(0.00%)|0(0.00%)|0(0.00%)|0(0.00%)|1(16.67%)|
|in_1.v|4|3|1|7|0(0.00%)|2(28.57%)|2(28.57%)|0(0.00%)|0(0.00%)|0(0.00%)|2(28.57%)|1(14.29%)|
|in_2.v|3124|650|2474|48061|2774(5.77%)|7189(14.96%)|3853(8.02%)|3230(6.72%)|152(0.32%)|69(0.14%)|9931(20.66%)|20863(43.41%)|
|in_1.v|3124|650|2474|59886|20499(34.23%)|11(0.02%)|8504(14.20%)|63(0.11%)|4170(6.96%)|298(0.50%)|7623(12.73%)|18718(31.26%)|
|in_2.v|227|99|128|28993|4291(14.80%)|6239(21.52%)|4341(14.97%)|1460(5.04%)|3495(12.05%)|128(0.44%)|8364(28.85%)|675(2.33%)|
|in_1.v|227|99|128|17498|7950(45.43%)|0(0.00%)|1681(9.61%)|1214(6.94%)|3395(19.40%)|1298(7.42%)|506(2.89%)|1454(8.31%)|
|in_2.v|6761|1364|5397|52219|6905(13.22%)|7068(13.54%)|4978(9.53%)|5669(10.86%)|31(0.06%)|13(0.02%)|9548(18.28%)|18007(34.48%)|
|in_1.v|6761|1364|5397|78169|28850(36.91%)|13(0.02%)|11091(14.19%)|404(0.52%)|3239(4.14%)|93(0.12%)|11937(15.27%)|22542(28.84%)|
|cir2.v|43|36|7|351|24(6.84%)|89(25.36%)|27(7.69%)|42(11.97%)|0(0.00%)|0(0.00%)|109(31.05%)|60(17.09%)|
|cir1.v|43|36|7|217|4(1.84%)|79(36.41%)|0(0.00%)|19(8.76%)|18(8.29%)|0(0.00%)|40(18.43%)|57(26.27%)|
|cir2.v|517|512|5|2566|541(21.08%)|264(10.29%)|125(4.87%)|320(12.47%)|58(2.26%)|9(0.35%)|722(28.14%)|527(20.54%)|
|cir1.v|517|512|5|2069|3(0.14%)|0(0.00%)|255(12.32%)|0(0.00%)|768(37.12%)|0(0.00%)|4(0.19%)|1039(50.22%)|
|cir2.v|2161|2151|10|23838|3195(13.40%)|2624(11.01%)|1590(6.67%)|1612(6.76%)|681(2.86%)|500(2.10%)|7214(30.26%)|6422(26.94%)|
|cir1.v|2161|2151|10|10770|1424(13.22%)|0(0.00%)|579(5.38%)|0(0.00%)|3582(33.26%)|0(0.00%)|852(7.91%)|4333(40.23%)|
|cir2.v|202|192|10|2829|1316(46.52%)|0(0.00%)|0(0.00%)|0(0.00%)|54(1.91%)|0(0.00%)|1045(36.94%)|414(14.63%)|
|cir1.v|203|193|10|3614|1644(45.49%)|0(0.00%)|670(18.54%)|20(0.55%)|593(16.41%)|0(0.00%)|463(12.81%)|224(6.20%)|
|cir2.v|513|512|1|3066|763(24.89%)|0(0.00%)|254(8.28%)|0(0.00%)|766(24.98%)|0(0.00%)|0(0.00%)|1283(41.85%)|
|cir1.v|514|512|2|5782|1469(25.41%)|0(0.00%)|496(8.58%)|0(0.00%)|1493(25.82%)|0(0.00%)|279(4.83%)|2045(35.37%)|
|cir2.v|202|192|10|117514|18527(15.77%)|23112(19.67%)|16314(13.88%)|6546(5.57%)|9002(7.66%)|1318(1.12%)|41114(34.99%)|1581(1.35%)|
|cir1.v|202|192|10|77428|31166(40.25%)|0(0.00%)|11810(15.25%)|8777(11.34%)|24143(31.18%)|0(0.00%)|403(0.52%)|1129(1.46%)|
|cir2.v|2196|2186|10|24563|3309(13.47%)|2700(10.99%)|1620(6.60%)|1674(6.82%)|717(2.92%)|527(2.15%)|7469(30.41%)|6547(26.65%)|
|cir1.v|2194|2184|10|11029|1455(13.19%)|0(0.00%)|592(5.37%)|0(0.00%)|3702(33.57%)|0(0.00%)|871(7.90%)|4409(39.98%)|
|cir2.v|6|4|2|16|3(18.75%)|0(0.00%)|2(12.50%)|0(0.00%)|0(0.00%)|0(0.00%)|1(6.25%)|10(62.50%)|
|cir1.v|6|4|2|14|2(14.29%)|0(0.00%)|2(14.29%)|0(0.00%)|0(0.00%)|0(0.00%)|1(7.14%)|9(64.29%)|
|cir2.v|2050|2048|2|7969|57(0.72%)|1513(18.99%)|2006(25.17%)|261(3.28%)|0(0.00%)|0(0.00%)|2078(26.08%)|2054(25.77%)|
|cir1.v|2050|2048|2|8220|0(0.00%)|0(0.00%)|2046(24.89%)|0(0.00%)|1031(12.54%)|0(0.00%)|10(0.12%)|5133(62.45%)|
|in_2.v|384|128|256|82480|8088(9.81%)|12720(15.42%)|9754(11.83%)|1666(2.02%)|9744(11.81%)|199(0.24%)|16484(19.99%)|23825(28.89%)|
|in_1.v|384|128|256|41474|19455(46.91%)|0(0.00%)|3967(9.57%)|3504(8.45%)|8244(19.88%)|3584(8.64%)|536(1.29%)|2184(5.27%)|
|in_2.v|227|99|128|16643|1930(11.60%)|2259(13.57%)|1818(10.92%)|700(4.21%)|1465(8.80%)|41(0.25%)|2860(17.18%)|5570(33.47%)|
|in_1.v|227|99|128|7323|3125(42.67%)|0(0.00%)|688(9.40%)|465(6.35%)|1329(18.15%)|503(6.87%)|289(3.95%)|924(12.62%)|
|in_2.v|227|99|128|17572|2067(11.76%)|1959(11.15%)|1626(9.25%)|572(3.26%)|1750(9.96%)|34(0.19%)|2490(14.17%)|7074(40.26%)|
|in_1.v|227|99|128|7323|3125(42.67%)|0(0.00%)|688(9.40%)|465(6.35%)|1329(18.15%)|503(6.87%)|289(3.95%)|924(12.62%)|
|in_2.v|1163|249|914|10063|860(8.55%)|2093(20.80%)|1023(10.17%)|983(9.77%)|56(0.56%)|20(0.20%)|2931(29.13%)|2097(20.84%)|
|in_1.v|1163|249|914|13876|5793(41.75%)|3(0.02%)|2385(17.19%)|22(0.16%)|1033(7.44%)|91(0.66%)|2220(16.00%)|2329(16.78%)|
|in_2.v|5008|2282|2726|91236|11739(12.87%)|16094(17.64%)|10098(11.07%)|7409(8.12%)|1105(1.21%)|753(0.83%)|29486(32.32%)|14552(15.95%)|
|in_1.v|5008|2282|2726|51439|13650(26.54%)|0(0.00%)|5219(10.15%)|4(0.01%)|12750(24.79%)|0(0.00%)|8314(16.16%)|11502(22.36%)|
|in_2.v|384|128|256|46395|4164(8.98%)|4632(9.98%)|3708(7.99%)|1504(3.24%)|4082(8.80%)|209(0.45%)|6386(13.76%)|21710(46.79%)|
|in_1.v|384|128|256|82480|8088(9.81%)|12720(15.42%)|9754(11.83%)|1666(2.02%)|9744(11.81%)|199(0.24%)|16484(19.99%)|23825(28.89%)|
|in_2.v|227|99|128|28052|4239(15.11%)|5910(21.07%)|4253(15.16%)|1360(4.85%)|3541(12.62%)|137(0.49%)|7952(28.35%)|660(2.35%)|
|in_1.v|227|99|128|28993|4291(14.80%)|6239(21.52%)|4341(14.97%)|1460(5.04%)|3495(12.05%)|128(0.44%)|8364(28.85%)|675(2.33%)|
|in_2.v|5008|2282|2726|91236|11756(12.89%)|16077(17.62%)|10094(11.06%)|7409(8.12%)|1109(1.22%)|753(0.83%)|29486(32.32%)|14552(15.95%)|
|in_1.v|5008|2282|2726|51439|13637(26.51%)|11(0.02%)|5214(10.14%)|7(0.01%)|12754(24.79%)|0(0.00%)|8316(16.17%)|11500(22.36%)|
|in_2.v|3124|650|2474|48061|2772(5.77%)|7193(14.97%)|3857(8.03%)|3228(6.72%)|149(0.31%)|68(0.14%)|9926(20.65%)|20868(43.42%)|
|in_1.v|3124|650|2474|59886|20515(34.26%)|0(0.00%)|8501(14.20%)|60(0.10%)|4171(6.96%)|298(0.50%)|7621(12.73%)|18720(31.26%)|
|in_2.v|1163|249|914|10063|860(8.55%)|2093(20.80%)|1023(10.17%)|983(9.77%)|56(0.56%)|20(0.20%)|2931(29.13%)|2097(20.84%)|
|in_1.v|1163|249|914|13877|5796(41.77%)|0(0.00%)|2388(17.21%)|20(0.14%)|1032(7.44%)|91(0.66%)|2221(16.00%)|2329(16.78%)|
|cir2.v|96|80|16|9273|4203(45.33%)|359(3.87%)|1014(10.93%)|677(7.30%)|1922(20.73%)|478(5.15%)|220(2.37%)|400(4.31%)|
|cir1.v|96|80|16|8659|3535(40.82%)|0(0.00%)|1153(13.32%)|797(9.20%)|2486(28.71%)|0(0.00%)|145(1.67%)|543(6.27%)|
|cir2.v|265|250|15|1846|128(6.93%)|374(20.26%)|107(5.80%)|202(10.94%)|12(0.65%)|6(0.33%)|648(35.10%)|369(19.99%)|
|cir1.v|264|249|15|4654|1630(35.02%)|0(0.00%)|635(13.64%)|20(0.43%)|525(11.28%)|0(0.00%)|1333(28.64%)|511(10.98%)|
|cir2.v|59|43|16|355|77(21.69%)|0(0.00%)|27(7.61%)|0(0.00%)|56(15.77%)|1(0.28%)|28(7.89%)|166(46.76%)|
|cir1.v|58|42|16|338|74(21.89%)|0(0.00%)|27(7.99%)|0(0.00%)|54(15.98%)|2(0.59%)|17(5.03%)|164(48.52%)|
|cir2.v|32|16|16|470|207(44.04%)|0(0.00%)|48(10.21%)|14(2.98%)|105(22.34%)|0(0.00%)|16(3.40%)|80(17.02%)|
|cir1.v|27|11|16|427|171(40.05%)|0(0.00%)|40(9.37%)|12(2.81%)|92(21.55%)|0(0.00%)|16(3.75%)|96(22.48%)|
|cir2.v|32|16|16|470|207(44.04%)|0(0.00%)|48(10.21%)|14(2.98%)|105(22.34%)|0(0.00%)|16(3.40%)|80(17.02%)|
|cir1.v|29|13|16|422|165(39.10%)|0(0.00%)|41(9.72%)|11(2.61%)|92(21.80%)|0(0.00%)|15(3.55%)|98(23.22%)|
|cir2.v|8|5|3|4|1(25.00%)|0(0.00%)|1(25.00%)|0(0.00%)|1(25.00%)|0(0.00%)|1(25.00%)|0(0.00%)|
|cir1.v|6|3|3|3|1(33.33%)|0(0.00%)|1(33.33%)|0(0.00%)|1(33.33%)|0(0.00%)|0(0.00%)|0(0.00%)|
|in_2.v|3124|650|2474|48061|2774(5.77%)|7189(14.96%)|3853(8.02%)|3230(6.72%)|152(0.32%)|69(0.14%)|9931(20.66%)|20863(43.41%)|
|in_1.v|3124|650|2474|59886|20498(34.23%)|11(0.02%)|8504(14.20%)|63(0.11%)|4169(6.96%)|298(0.50%)|7625(12.73%)|18718(31.26%)|
|in_2.v|185|56|129|14600|1491(10.21%)|1879(12.87%)|1143(7.83%)|518(3.55%)|984(6.74%)|78(0.53%)|2692(18.44%)|5815(39.83%)|
|in_1.v|185|56|129|14409|1412(9.80%)|1726(11.98%)|1040(7.22%)|460(3.19%)|992(6.88%)|100(0.69%)|2374(16.48%)|6305(43.76%)|
|in_2.v|6761|1364|5397|52219|6900(13.21%)|7072(13.54%)|4982(9.54%)|5670(10.86%)|28(0.05%)|12(0.02%)|9543(18.27%)|18012(34.49%)|
|in_1.v|6761|1364|5397|78169|28855(36.91%)|9(0.01%)|11100(14.20%)|399(0.51%)|3234(4.14%)|93(0.12%)|11934(15.27%)|22545(28.84%)|


## Tests

Our tests can be run by:

```
cd tests && ctest
```

## Contributors




## License

The current code is available under BSD3 licese. 

>
>Copyright (c) 2016, Emilio Wuerges
>
>All rights reserved.
>
>Redistribution and use in source and binary forms, with or without
>modification, are permitted provided that the following conditions are met:
>
>    * Redistributions of source code must retain the above copyright
>      notice, this list of conditions and the following disclaimer.
>
>    * Redistributions in binary form must reproduce the above
>      copyright notice, this list of conditions and the following
>      disclaimer in the documentation and/or other materials provided
>      with the distribution.
>
>    * Neither the name of Emilio Wuerges nor the names of other
>      contributors may be used to endorse or promote products derived
>      from this software without specific prior written permission.
>
>THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
>"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
>LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
>A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
>OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
>SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
>LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
>DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
>THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
>(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
>OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
>
