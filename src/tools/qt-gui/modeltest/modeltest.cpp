<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns='http://www.w3.org/1999/xhtml' xml:lang='en' lang='en'>
<head>
<title>qt/qt.git - Qt 4.x. This repository is limited to security fixes at this point.</title>
<meta name='generator' content='cgit v0.11.0'/>
<meta name='robots' content='index, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit-data/cgit.css'/>
<link rel='shortcut icon' href='/favicon.ico'/>
<link rel='alternate' title='Atom feed' href='http://code.qt.io/cgit/qt/qt.git/atom/tests/auto/modeltest/modeltest.cpp?h=4.8' type='application/atom+xml'/>
<link rel='vcs-git' href='git://code.qt.io/qt/qt.git' title='qt/qt.git Git repository'/>
<link rel='vcs-git' href='http://code.qt.io/qt/qt.git' title='qt/qt.git Git repository'/>
<link rel='vcs-git' href='https://code.qt.io/qt/qt.git' title='qt/qt.git Git repository'/>
</head>
<body>
<div id='cgit'><table id='header'>
<tr>
<td class='logo' rowspan='2'><a href='/cgit/'><img src='/cgit-data/logo_qt.png' alt='cgit logo'/></a></td>
<td class='main'><a href='/cgit/'>index</a> : <a title='qt/qt.git' href='/cgit/qt/qt.git/'>qt/qt.git</a></td><td class='form'><form method='get' action=''>
<select name='h' onchange='this.form.submit();'>
<option value='4.5'>4.5</option>
<option value='4.6'>4.6</option>
<option value='4.6-digia'>4.6-digia</option>
<option value='4.7'>4.7</option>
<option value='4.7-digia'>4.7-digia</option>
<option value='4.8' selected='selected'>4.8</option>
<option value='4.8-bb10'>4.8-bb10</option>
<option value='4.8.0-symbian'>4.8.0-symbian</option>
<option value='4.8.1-symbian'>4.8.1-symbian</option>
<option value='history/qtquick2'>history/qtquick2</option>
<option value='history/qtquick2-v8'>history/qtquick2-v8</option>
</select> <input type='submit' name='' value='switch'/></form></td></tr>
<tr><td class='sub'>Qt 4.x. This repository is limited to security fixes at this point.</td><td class='sub right'></td></tr></table>
<table class='tabs'><tr><td>
<a href='/cgit/qt/qt.git/'>summary</a><a href='/cgit/qt/qt.git/refs/'>refs</a><a href='/cgit/qt/qt.git/log/tests/auto/modeltest/modeltest.cpp'>log</a><a class='active' href='/cgit/qt/qt.git/tree/tests/auto/modeltest/modeltest.cpp'>tree</a><a href='/cgit/qt/qt.git/commit/tests/auto/modeltest/modeltest.cpp'>commit</a><a href='/cgit/qt/qt.git/diff/tests/auto/modeltest/modeltest.cpp'>diff</a><a href='/cgit/qt/qt.git/stats/tests/auto/modeltest/modeltest.cpp'>stats</a></td><td class='form'><form class='right' method='get' action='/cgit/qt/qt.git/log/tests/auto/modeltest/modeltest.cpp'>
<select name='qt'>
<option value='grep'>log msg</option>
<option value='author'>author</option>
<option value='committer'>committer</option>
<option value='range'>range</option>
</select>
<input class='txt' type='text' size='10' name='q' value=''/>
<input type='submit' value='search'/>
</form>
</td></tr></table>
<div class='path'>path: <a href='/cgit/qt/qt.git/tree/'>root</a>/<a href='/cgit/qt/qt.git/tree/tests'>tests</a>/<a href='/cgit/qt/qt.git/tree/tests/auto'>auto</a>/<a href='/cgit/qt/qt.git/tree/tests/auto/modeltest'>modeltest</a>/<a href='/cgit/qt/qt.git/tree/tests/auto/modeltest/modeltest.cpp'>modeltest.cpp</a></div><div class='content'>blob: a2141fbeaa5a0a158cf7a7b2f0fec167472f20e0 (<a href='/cgit/qt/qt.git/plain/tests/auto/modeltest/modeltest.cpp'>plain</a>)
<table summary='blob content' class='blob'>
<tr><td class='linenumbers'><pre><a id='n1' href='#n1'>1</a>
<a id='n2' href='#n2'>2</a>
<a id='n3' href='#n3'>3</a>
<a id='n4' href='#n4'>4</a>
<a id='n5' href='#n5'>5</a>
<a id='n6' href='#n6'>6</a>
<a id='n7' href='#n7'>7</a>
<a id='n8' href='#n8'>8</a>
<a id='n9' href='#n9'>9</a>
<a id='n10' href='#n10'>10</a>
<a id='n11' href='#n11'>11</a>
<a id='n12' href='#n12'>12</a>
<a id='n13' href='#n13'>13</a>
<a id='n14' href='#n14'>14</a>
<a id='n15' href='#n15'>15</a>
<a id='n16' href='#n16'>16</a>
<a id='n17' href='#n17'>17</a>
<a id='n18' href='#n18'>18</a>
<a id='n19' href='#n19'>19</a>
<a id='n20' href='#n20'>20</a>
<a id='n21' href='#n21'>21</a>
<a id='n22' href='#n22'>22</a>
<a id='n23' href='#n23'>23</a>
<a id='n24' href='#n24'>24</a>
<a id='n25' href='#n25'>25</a>
<a id='n26' href='#n26'>26</a>
<a id='n27' href='#n27'>27</a>
<a id='n28' href='#n28'>28</a>
<a id='n29' href='#n29'>29</a>
<a id='n30' href='#n30'>30</a>
<a id='n31' href='#n31'>31</a>
<a id='n32' href='#n32'>32</a>
<a id='n33' href='#n33'>33</a>
<a id='n34' href='#n34'>34</a>
<a id='n35' href='#n35'>35</a>
<a id='n36' href='#n36'>36</a>
<a id='n37' href='#n37'>37</a>
<a id='n38' href='#n38'>38</a>
<a id='n39' href='#n39'>39</a>
<a id='n40' href='#n40'>40</a>
<a id='n41' href='#n41'>41</a>
<a id='n42' href='#n42'>42</a>
<a id='n43' href='#n43'>43</a>
<a id='n44' href='#n44'>44</a>
<a id='n45' href='#n45'>45</a>
<a id='n46' href='#n46'>46</a>
<a id='n47' href='#n47'>47</a>
<a id='n48' href='#n48'>48</a>
<a id='n49' href='#n49'>49</a>
<a id='n50' href='#n50'>50</a>
<a id='n51' href='#n51'>51</a>
<a id='n52' href='#n52'>52</a>
<a id='n53' href='#n53'>53</a>
<a id='n54' href='#n54'>54</a>
<a id='n55' href='#n55'>55</a>
<a id='n56' href='#n56'>56</a>
<a id='n57' href='#n57'>57</a>
<a id='n58' href='#n58'>58</a>
<a id='n59' href='#n59'>59</a>
<a id='n60' href='#n60'>60</a>
<a id='n61' href='#n61'>61</a>
<a id='n62' href='#n62'>62</a>
<a id='n63' href='#n63'>63</a>
<a id='n64' href='#n64'>64</a>
<a id='n65' href='#n65'>65</a>
<a id='n66' href='#n66'>66</a>
<a id='n67' href='#n67'>67</a>
<a id='n68' href='#n68'>68</a>
<a id='n69' href='#n69'>69</a>
<a id='n70' href='#n70'>70</a>
<a id='n71' href='#n71'>71</a>
<a id='n72' href='#n72'>72</a>
<a id='n73' href='#n73'>73</a>
<a id='n74' href='#n74'>74</a>
<a id='n75' href='#n75'>75</a>
<a id='n76' href='#n76'>76</a>
<a id='n77' href='#n77'>77</a>
<a id='n78' href='#n78'>78</a>
<a id='n79' href='#n79'>79</a>
<a id='n80' href='#n80'>80</a>
<a id='n81' href='#n81'>81</a>
<a id='n82' href='#n82'>82</a>
<a id='n83' href='#n83'>83</a>
<a id='n84' href='#n84'>84</a>
<a id='n85' href='#n85'>85</a>
<a id='n86' href='#n86'>86</a>
<a id='n87' href='#n87'>87</a>
<a id='n88' href='#n88'>88</a>
<a id='n89' href='#n89'>89</a>
<a id='n90' href='#n90'>90</a>
<a id='n91' href='#n91'>91</a>
<a id='n92' href='#n92'>92</a>
<a id='n93' href='#n93'>93</a>
<a id='n94' href='#n94'>94</a>
<a id='n95' href='#n95'>95</a>
<a id='n96' href='#n96'>96</a>
<a id='n97' href='#n97'>97</a>
<a id='n98' href='#n98'>98</a>
<a id='n99' href='#n99'>99</a>
<a id='n100' href='#n100'>100</a>
<a id='n101' href='#n101'>101</a>
<a id='n102' href='#n102'>102</a>
<a id='n103' href='#n103'>103</a>
<a id='n104' href='#n104'>104</a>
<a id='n105' href='#n105'>105</a>
<a id='n106' href='#n106'>106</a>
<a id='n107' href='#n107'>107</a>
<a id='n108' href='#n108'>108</a>
<a id='n109' href='#n109'>109</a>
<a id='n110' href='#n110'>110</a>
<a id='n111' href='#n111'>111</a>
<a id='n112' href='#n112'>112</a>
<a id='n113' href='#n113'>113</a>
<a id='n114' href='#n114'>114</a>
<a id='n115' href='#n115'>115</a>
<a id='n116' href='#n116'>116</a>
<a id='n117' href='#n117'>117</a>
<a id='n118' href='#n118'>118</a>
<a id='n119' href='#n119'>119</a>
<a id='n120' href='#n120'>120</a>
<a id='n121' href='#n121'>121</a>
<a id='n122' href='#n122'>122</a>
<a id='n123' href='#n123'>123</a>
<a id='n124' href='#n124'>124</a>
<a id='n125' href='#n125'>125</a>
<a id='n126' href='#n126'>126</a>
<a id='n127' href='#n127'>127</a>
<a id='n128' href='#n128'>128</a>
<a id='n129' href='#n129'>129</a>
<a id='n130' href='#n130'>130</a>
<a id='n131' href='#n131'>131</a>
<a id='n132' href='#n132'>132</a>
<a id='n133' href='#n133'>133</a>
<a id='n134' href='#n134'>134</a>
<a id='n135' href='#n135'>135</a>
<a id='n136' href='#n136'>136</a>
<a id='n137' href='#n137'>137</a>
<a id='n138' href='#n138'>138</a>
<a id='n139' href='#n139'>139</a>
<a id='n140' href='#n140'>140</a>
<a id='n141' href='#n141'>141</a>
<a id='n142' href='#n142'>142</a>
<a id='n143' href='#n143'>143</a>
<a id='n144' href='#n144'>144</a>
<a id='n145' href='#n145'>145</a>
<a id='n146' href='#n146'>146</a>
<a id='n147' href='#n147'>147</a>
<a id='n148' href='#n148'>148</a>
<a id='n149' href='#n149'>149</a>
<a id='n150' href='#n150'>150</a>
<a id='n151' href='#n151'>151</a>
<a id='n152' href='#n152'>152</a>
<a id='n153' href='#n153'>153</a>
<a id='n154' href='#n154'>154</a>
<a id='n155' href='#n155'>155</a>
<a id='n156' href='#n156'>156</a>
<a id='n157' href='#n157'>157</a>
<a id='n158' href='#n158'>158</a>
<a id='n159' href='#n159'>159</a>
<a id='n160' href='#n160'>160</a>
<a id='n161' href='#n161'>161</a>
<a id='n162' href='#n162'>162</a>
<a id='n163' href='#n163'>163</a>
<a id='n164' href='#n164'>164</a>
<a id='n165' href='#n165'>165</a>
<a id='n166' href='#n166'>166</a>
<a id='n167' href='#n167'>167</a>
<a id='n168' href='#n168'>168</a>
<a id='n169' href='#n169'>169</a>
<a id='n170' href='#n170'>170</a>
<a id='n171' href='#n171'>171</a>
<a id='n172' href='#n172'>172</a>
<a id='n173' href='#n173'>173</a>
<a id='n174' href='#n174'>174</a>
<a id='n175' href='#n175'>175</a>
<a id='n176' href='#n176'>176</a>
<a id='n177' href='#n177'>177</a>
<a id='n178' href='#n178'>178</a>
<a id='n179' href='#n179'>179</a>
<a id='n180' href='#n180'>180</a>
<a id='n181' href='#n181'>181</a>
<a id='n182' href='#n182'>182</a>
<a id='n183' href='#n183'>183</a>
<a id='n184' href='#n184'>184</a>
<a id='n185' href='#n185'>185</a>
<a id='n186' href='#n186'>186</a>
<a id='n187' href='#n187'>187</a>
<a id='n188' href='#n188'>188</a>
<a id='n189' href='#n189'>189</a>
<a id='n190' href='#n190'>190</a>
<a id='n191' href='#n191'>191</a>
<a id='n192' href='#n192'>192</a>
<a id='n193' href='#n193'>193</a>
<a id='n194' href='#n194'>194</a>
<a id='n195' href='#n195'>195</a>
<a id='n196' href='#n196'>196</a>
<a id='n197' href='#n197'>197</a>
<a id='n198' href='#n198'>198</a>
<a id='n199' href='#n199'>199</a>
<a id='n200' href='#n200'>200</a>
<a id='n201' href='#n201'>201</a>
<a id='n202' href='#n202'>202</a>
<a id='n203' href='#n203'>203</a>
<a id='n204' href='#n204'>204</a>
<a id='n205' href='#n205'>205</a>
<a id='n206' href='#n206'>206</a>
<a id='n207' href='#n207'>207</a>
<a id='n208' href='#n208'>208</a>
<a id='n209' href='#n209'>209</a>
<a id='n210' href='#n210'>210</a>
<a id='n211' href='#n211'>211</a>
<a id='n212' href='#n212'>212</a>
<a id='n213' href='#n213'>213</a>
<a id='n214' href='#n214'>214</a>
<a id='n215' href='#n215'>215</a>
<a id='n216' href='#n216'>216</a>
<a id='n217' href='#n217'>217</a>
<a id='n218' href='#n218'>218</a>
<a id='n219' href='#n219'>219</a>
<a id='n220' href='#n220'>220</a>
<a id='n221' href='#n221'>221</a>
<a id='n222' href='#n222'>222</a>
<a id='n223' href='#n223'>223</a>
<a id='n224' href='#n224'>224</a>
<a id='n225' href='#n225'>225</a>
<a id='n226' href='#n226'>226</a>
<a id='n227' href='#n227'>227</a>
<a id='n228' href='#n228'>228</a>
<a id='n229' href='#n229'>229</a>
<a id='n230' href='#n230'>230</a>
<a id='n231' href='#n231'>231</a>
<a id='n232' href='#n232'>232</a>
<a id='n233' href='#n233'>233</a>
<a id='n234' href='#n234'>234</a>
<a id='n235' href='#n235'>235</a>
<a id='n236' href='#n236'>236</a>
<a id='n237' href='#n237'>237</a>
<a id='n238' href='#n238'>238</a>
<a id='n239' href='#n239'>239</a>
<a id='n240' href='#n240'>240</a>
<a id='n241' href='#n241'>241</a>
<a id='n242' href='#n242'>242</a>
<a id='n243' href='#n243'>243</a>
<a id='n244' href='#n244'>244</a>
<a id='n245' href='#n245'>245</a>
<a id='n246' href='#n246'>246</a>
<a id='n247' href='#n247'>247</a>
<a id='n248' href='#n248'>248</a>
<a id='n249' href='#n249'>249</a>
<a id='n250' href='#n250'>250</a>
<a id='n251' href='#n251'>251</a>
<a id='n252' href='#n252'>252</a>
<a id='n253' href='#n253'>253</a>
<a id='n254' href='#n254'>254</a>
<a id='n255' href='#n255'>255</a>
<a id='n256' href='#n256'>256</a>
<a id='n257' href='#n257'>257</a>
<a id='n258' href='#n258'>258</a>
<a id='n259' href='#n259'>259</a>
<a id='n260' href='#n260'>260</a>
<a id='n261' href='#n261'>261</a>
<a id='n262' href='#n262'>262</a>
<a id='n263' href='#n263'>263</a>
<a id='n264' href='#n264'>264</a>
<a id='n265' href='#n265'>265</a>
<a id='n266' href='#n266'>266</a>
<a id='n267' href='#n267'>267</a>
<a id='n268' href='#n268'>268</a>
<a id='n269' href='#n269'>269</a>
<a id='n270' href='#n270'>270</a>
<a id='n271' href='#n271'>271</a>
<a id='n272' href='#n272'>272</a>
<a id='n273' href='#n273'>273</a>
<a id='n274' href='#n274'>274</a>
<a id='n275' href='#n275'>275</a>
<a id='n276' href='#n276'>276</a>
<a id='n277' href='#n277'>277</a>
<a id='n278' href='#n278'>278</a>
<a id='n279' href='#n279'>279</a>
<a id='n280' href='#n280'>280</a>
<a id='n281' href='#n281'>281</a>
<a id='n282' href='#n282'>282</a>
<a id='n283' href='#n283'>283</a>
<a id='n284' href='#n284'>284</a>
<a id='n285' href='#n285'>285</a>
<a id='n286' href='#n286'>286</a>
<a id='n287' href='#n287'>287</a>
<a id='n288' href='#n288'>288</a>
<a id='n289' href='#n289'>289</a>
<a id='n290' href='#n290'>290</a>
<a id='n291' href='#n291'>291</a>
<a id='n292' href='#n292'>292</a>
<a id='n293' href='#n293'>293</a>
<a id='n294' href='#n294'>294</a>
<a id='n295' href='#n295'>295</a>
<a id='n296' href='#n296'>296</a>
<a id='n297' href='#n297'>297</a>
<a id='n298' href='#n298'>298</a>
<a id='n299' href='#n299'>299</a>
<a id='n300' href='#n300'>300</a>
<a id='n301' href='#n301'>301</a>
<a id='n302' href='#n302'>302</a>
<a id='n303' href='#n303'>303</a>
<a id='n304' href='#n304'>304</a>
<a id='n305' href='#n305'>305</a>
<a id='n306' href='#n306'>306</a>
<a id='n307' href='#n307'>307</a>
<a id='n308' href='#n308'>308</a>
<a id='n309' href='#n309'>309</a>
<a id='n310' href='#n310'>310</a>
<a id='n311' href='#n311'>311</a>
<a id='n312' href='#n312'>312</a>
<a id='n313' href='#n313'>313</a>
<a id='n314' href='#n314'>314</a>
<a id='n315' href='#n315'>315</a>
<a id='n316' href='#n316'>316</a>
<a id='n317' href='#n317'>317</a>
<a id='n318' href='#n318'>318</a>
<a id='n319' href='#n319'>319</a>
<a id='n320' href='#n320'>320</a>
<a id='n321' href='#n321'>321</a>
<a id='n322' href='#n322'>322</a>
<a id='n323' href='#n323'>323</a>
<a id='n324' href='#n324'>324</a>
<a id='n325' href='#n325'>325</a>
<a id='n326' href='#n326'>326</a>
<a id='n327' href='#n327'>327</a>
<a id='n328' href='#n328'>328</a>
<a id='n329' href='#n329'>329</a>
<a id='n330' href='#n330'>330</a>
<a id='n331' href='#n331'>331</a>
<a id='n332' href='#n332'>332</a>
<a id='n333' href='#n333'>333</a>
<a id='n334' href='#n334'>334</a>
<a id='n335' href='#n335'>335</a>
<a id='n336' href='#n336'>336</a>
<a id='n337' href='#n337'>337</a>
<a id='n338' href='#n338'>338</a>
<a id='n339' href='#n339'>339</a>
<a id='n340' href='#n340'>340</a>
<a id='n341' href='#n341'>341</a>
<a id='n342' href='#n342'>342</a>
<a id='n343' href='#n343'>343</a>
<a id='n344' href='#n344'>344</a>
<a id='n345' href='#n345'>345</a>
<a id='n346' href='#n346'>346</a>
<a id='n347' href='#n347'>347</a>
<a id='n348' href='#n348'>348</a>
<a id='n349' href='#n349'>349</a>
<a id='n350' href='#n350'>350</a>
<a id='n351' href='#n351'>351</a>
<a id='n352' href='#n352'>352</a>
<a id='n353' href='#n353'>353</a>
<a id='n354' href='#n354'>354</a>
<a id='n355' href='#n355'>355</a>
<a id='n356' href='#n356'>356</a>
<a id='n357' href='#n357'>357</a>
<a id='n358' href='#n358'>358</a>
<a id='n359' href='#n359'>359</a>
<a id='n360' href='#n360'>360</a>
<a id='n361' href='#n361'>361</a>
<a id='n362' href='#n362'>362</a>
<a id='n363' href='#n363'>363</a>
<a id='n364' href='#n364'>364</a>
<a id='n365' href='#n365'>365</a>
<a id='n366' href='#n366'>366</a>
<a id='n367' href='#n367'>367</a>
<a id='n368' href='#n368'>368</a>
<a id='n369' href='#n369'>369</a>
<a id='n370' href='#n370'>370</a>
<a id='n371' href='#n371'>371</a>
<a id='n372' href='#n372'>372</a>
<a id='n373' href='#n373'>373</a>
<a id='n374' href='#n374'>374</a>
<a id='n375' href='#n375'>375</a>
<a id='n376' href='#n376'>376</a>
<a id='n377' href='#n377'>377</a>
<a id='n378' href='#n378'>378</a>
<a id='n379' href='#n379'>379</a>
<a id='n380' href='#n380'>380</a>
<a id='n381' href='#n381'>381</a>
<a id='n382' href='#n382'>382</a>
<a id='n383' href='#n383'>383</a>
<a id='n384' href='#n384'>384</a>
<a id='n385' href='#n385'>385</a>
<a id='n386' href='#n386'>386</a>
<a id='n387' href='#n387'>387</a>
<a id='n388' href='#n388'>388</a>
<a id='n389' href='#n389'>389</a>
<a id='n390' href='#n390'>390</a>
<a id='n391' href='#n391'>391</a>
<a id='n392' href='#n392'>392</a>
<a id='n393' href='#n393'>393</a>
<a id='n394' href='#n394'>394</a>
<a id='n395' href='#n395'>395</a>
<a id='n396' href='#n396'>396</a>
<a id='n397' href='#n397'>397</a>
<a id='n398' href='#n398'>398</a>
<a id='n399' href='#n399'>399</a>
<a id='n400' href='#n400'>400</a>
<a id='n401' href='#n401'>401</a>
<a id='n402' href='#n402'>402</a>
<a id='n403' href='#n403'>403</a>
<a id='n404' href='#n404'>404</a>
<a id='n405' href='#n405'>405</a>
<a id='n406' href='#n406'>406</a>
<a id='n407' href='#n407'>407</a>
<a id='n408' href='#n408'>408</a>
<a id='n409' href='#n409'>409</a>
<a id='n410' href='#n410'>410</a>
<a id='n411' href='#n411'>411</a>
<a id='n412' href='#n412'>412</a>
<a id='n413' href='#n413'>413</a>
<a id='n414' href='#n414'>414</a>
<a id='n415' href='#n415'>415</a>
<a id='n416' href='#n416'>416</a>
<a id='n417' href='#n417'>417</a>
<a id='n418' href='#n418'>418</a>
<a id='n419' href='#n419'>419</a>
<a id='n420' href='#n420'>420</a>
<a id='n421' href='#n421'>421</a>
<a id='n422' href='#n422'>422</a>
<a id='n423' href='#n423'>423</a>
<a id='n424' href='#n424'>424</a>
<a id='n425' href='#n425'>425</a>
<a id='n426' href='#n426'>426</a>
<a id='n427' href='#n427'>427</a>
<a id='n428' href='#n428'>428</a>
<a id='n429' href='#n429'>429</a>
<a id='n430' href='#n430'>430</a>
<a id='n431' href='#n431'>431</a>
<a id='n432' href='#n432'>432</a>
<a id='n433' href='#n433'>433</a>
<a id='n434' href='#n434'>434</a>
<a id='n435' href='#n435'>435</a>
<a id='n436' href='#n436'>436</a>
<a id='n437' href='#n437'>437</a>
<a id='n438' href='#n438'>438</a>
<a id='n439' href='#n439'>439</a>
<a id='n440' href='#n440'>440</a>
<a id='n441' href='#n441'>441</a>
<a id='n442' href='#n442'>442</a>
<a id='n443' href='#n443'>443</a>
<a id='n444' href='#n444'>444</a>
<a id='n445' href='#n445'>445</a>
<a id='n446' href='#n446'>446</a>
<a id='n447' href='#n447'>447</a>
<a id='n448' href='#n448'>448</a>
<a id='n449' href='#n449'>449</a>
<a id='n450' href='#n450'>450</a>
<a id='n451' href='#n451'>451</a>
<a id='n452' href='#n452'>452</a>
<a id='n453' href='#n453'>453</a>
<a id='n454' href='#n454'>454</a>
<a id='n455' href='#n455'>455</a>
<a id='n456' href='#n456'>456</a>
<a id='n457' href='#n457'>457</a>
<a id='n458' href='#n458'>458</a>
<a id='n459' href='#n459'>459</a>
<a id='n460' href='#n460'>460</a>
<a id='n461' href='#n461'>461</a>
<a id='n462' href='#n462'>462</a>
<a id='n463' href='#n463'>463</a>
<a id='n464' href='#n464'>464</a>
<a id='n465' href='#n465'>465</a>
<a id='n466' href='#n466'>466</a>
<a id='n467' href='#n467'>467</a>
<a id='n468' href='#n468'>468</a>
<a id='n469' href='#n469'>469</a>
<a id='n470' href='#n470'>470</a>
<a id='n471' href='#n471'>471</a>
<a id='n472' href='#n472'>472</a>
<a id='n473' href='#n473'>473</a>
<a id='n474' href='#n474'>474</a>
<a id='n475' href='#n475'>475</a>
<a id='n476' href='#n476'>476</a>
<a id='n477' href='#n477'>477</a>
<a id='n478' href='#n478'>478</a>
<a id='n479' href='#n479'>479</a>
<a id='n480' href='#n480'>480</a>
<a id='n481' href='#n481'>481</a>
<a id='n482' href='#n482'>482</a>
<a id='n483' href='#n483'>483</a>
<a id='n484' href='#n484'>484</a>
<a id='n485' href='#n485'>485</a>
<a id='n486' href='#n486'>486</a>
<a id='n487' href='#n487'>487</a>
<a id='n488' href='#n488'>488</a>
<a id='n489' href='#n489'>489</a>
<a id='n490' href='#n490'>490</a>
<a id='n491' href='#n491'>491</a>
<a id='n492' href='#n492'>492</a>
<a id='n493' href='#n493'>493</a>
<a id='n494' href='#n494'>494</a>
<a id='n495' href='#n495'>495</a>
<a id='n496' href='#n496'>496</a>
<a id='n497' href='#n497'>497</a>
<a id='n498' href='#n498'>498</a>
<a id='n499' href='#n499'>499</a>
<a id='n500' href='#n500'>500</a>
<a id='n501' href='#n501'>501</a>
<a id='n502' href='#n502'>502</a>
<a id='n503' href='#n503'>503</a>
<a id='n504' href='#n504'>504</a>
<a id='n505' href='#n505'>505</a>
<a id='n506' href='#n506'>506</a>
<a id='n507' href='#n507'>507</a>
<a id='n508' href='#n508'>508</a>
<a id='n509' href='#n509'>509</a>
<a id='n510' href='#n510'>510</a>
<a id='n511' href='#n511'>511</a>
<a id='n512' href='#n512'>512</a>
<a id='n513' href='#n513'>513</a>
<a id='n514' href='#n514'>514</a>
<a id='n515' href='#n515'>515</a>
<a id='n516' href='#n516'>516</a>
<a id='n517' href='#n517'>517</a>
<a id='n518' href='#n518'>518</a>
<a id='n519' href='#n519'>519</a>
<a id='n520' href='#n520'>520</a>
<a id='n521' href='#n521'>521</a>
<a id='n522' href='#n522'>522</a>
<a id='n523' href='#n523'>523</a>
<a id='n524' href='#n524'>524</a>
<a id='n525' href='#n525'>525</a>
<a id='n526' href='#n526'>526</a>
<a id='n527' href='#n527'>527</a>
<a id='n528' href='#n528'>528</a>
<a id='n529' href='#n529'>529</a>
<a id='n530' href='#n530'>530</a>
<a id='n531' href='#n531'>531</a>
<a id='n532' href='#n532'>532</a>
<a id='n533' href='#n533'>533</a>
<a id='n534' href='#n534'>534</a>
<a id='n535' href='#n535'>535</a>
<a id='n536' href='#n536'>536</a>
<a id='n537' href='#n537'>537</a>
<a id='n538' href='#n538'>538</a>
<a id='n539' href='#n539'>539</a>
<a id='n540' href='#n540'>540</a>
<a id='n541' href='#n541'>541</a>
<a id='n542' href='#n542'>542</a>
<a id='n543' href='#n543'>543</a>
<a id='n544' href='#n544'>544</a>
<a id='n545' href='#n545'>545</a>
<a id='n546' href='#n546'>546</a>
<a id='n547' href='#n547'>547</a>
<a id='n548' href='#n548'>548</a>
<a id='n549' href='#n549'>549</a>
<a id='n550' href='#n550'>550</a>
<a id='n551' href='#n551'>551</a>
<a id='n552' href='#n552'>552</a>
<a id='n553' href='#n553'>553</a>
<a id='n554' href='#n554'>554</a>
<a id='n555' href='#n555'>555</a>
<a id='n556' href='#n556'>556</a>
<a id='n557' href='#n557'>557</a>
<a id='n558' href='#n558'>558</a>
<a id='n559' href='#n559'>559</a>
<a id='n560' href='#n560'>560</a>
<a id='n561' href='#n561'>561</a>
<a id='n562' href='#n562'>562</a>
<a id='n563' href='#n563'>563</a>
<a id='n564' href='#n564'>564</a>
</pre></td>
<td class='lines'><pre><code><span class="hl com">/****************************************************************************</span>
<span class="hl com">**</span>
<span class="hl com">** Copyright (C) 2015 The Qt Company Ltd.</span>
<span class="hl com">** Contact: http://www.qt.io/licensing/</span>
<span class="hl com">**</span>
<span class="hl com">** This file is part of the test suite of the Qt Toolkit.</span>
<span class="hl com">**</span>
<span class="hl com">** $QT_BEGIN_LICENSE:LGPL$</span>
<span class="hl com">** Commercial License Usage</span>
<span class="hl com">** Licensees holding valid commercial Qt licenses may use this file in</span>
<span class="hl com">** accordance with the commercial license agreement provided with the</span>
<span class="hl com">** Software or, alternatively, in accordance with the terms contained in</span>
<span class="hl com">** a written agreement between you and The Qt Company. For licensing terms</span>
<span class="hl com">** and conditions see http://www.qt.io/terms-conditions. For further</span>
<span class="hl com">** information use the contact form at http://www.qt.io/contact-us.</span>
<span class="hl com">**</span>
<span class="hl com">** GNU Lesser General Public License Usage</span>
<span class="hl com">** Alternatively, this file may be used under the terms of the GNU Lesser</span>
<span class="hl com">** General Public License version 2.1 or version 3 as published by the Free</span>
<span class="hl com">** Software Foundation and appearing in the file LICENSE.LGPLv21 and</span>
<span class="hl com">** LICENSE.LGPLv3 included in the packaging of this file. Please review the</span>
<span class="hl com">** following information to ensure the GNU Lesser General Public License</span>
<span class="hl com">** requirements will be met: https://www.gnu.org/licenses/lgpl.html and</span>
<span class="hl com">** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.</span>
<span class="hl com">**</span>
<span class="hl com">** As a special exception, The Qt Company gives you certain additional</span>
<span class="hl com">** rights. These rights are described in The Qt Company LGPL Exception</span>
<span class="hl com">** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.</span>
<span class="hl com">**</span>
<span class="hl com">** GNU General Public License Usage</span>
<span class="hl com">** Alternatively, this file may be used under the terms of the GNU</span>
<span class="hl com">** General Public License version 3.0 as published by the Free Software</span>
<span class="hl com">** Foundation and appearing in the file LICENSE.GPL included in the</span>
<span class="hl com">** packaging of this file.  Please review the following information to</span>
<span class="hl com">** ensure the GNU General Public License version 3.0 requirements will be</span>
<span class="hl com">** met: http://www.gnu.org/copyleft/gpl.html.</span>
<span class="hl com">**</span>
<span class="hl com">** $QT_END_LICENSE$</span>
<span class="hl com">**</span>
<span class="hl com">****************************************************************************/</span>


<span class="hl ppc">#include &lt;QtGui/QtGui&gt;</span>

<span class="hl ppc">#include</span> <span class="hl pps">&quot;modeltest.h&quot;</span><span class="hl ppc"></span>

<span class="hl ppc">#include &lt;QtTest/QtTest&gt;</span>

<span class="hl kwd">Q_DECLARE_METATYPE</span> <span class="hl opt">(</span> QModelIndex <span class="hl opt">)</span>

<span class="hl com">/*!</span>
<span class="hl com">    Connect to all of the models signals.  Whenever anything happens recheck everything.</span>
<span class="hl com">*/</span>
ModelTest<span class="hl opt">::</span><span class="hl kwd">ModelTest</span> <span class="hl opt">(</span> QAbstractItemModel <span class="hl opt">*</span>_model<span class="hl opt">,</span> QObject <span class="hl opt">*</span>parent <span class="hl opt">) :</span> <span class="hl kwd">QObject</span> <span class="hl opt">(</span> parent <span class="hl opt">),</span> <span class="hl kwd">model</span> <span class="hl opt">(</span> _model <span class="hl opt">),</span> <span class="hl kwd">fetchingMore</span> <span class="hl opt">(</span> <span class="hl kwa">false</span> <span class="hl opt">)</span>
<span class="hl opt">{</span>
    <span class="hl kwa">if</span> <span class="hl opt">(!</span>model<span class="hl opt">)</span>
        <span class="hl kwd">qFatal</span><span class="hl opt">(</span><span class="hl str">&quot;%s: model must not be null&quot;</span><span class="hl opt">,</span> Q_FUNC_INFO<span class="hl opt">);</span>

    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">columnsAboutToBeInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">columnsAboutToBeRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">columnsInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">columnsRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">dataChanged</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp; ) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">headerDataChanged</span> <span class="hl opt">(</span> Qt<span class="hl opt">::</span>Orientation<span class="hl opt">,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">layoutAboutToBeChanged</span> <span class="hl opt">() ),</span> <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">layoutChanged</span> <span class="hl opt">() ),</span> <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">modelReset</span> <span class="hl opt">() ),</span> <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">rowsAboutToBeInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">rowsAboutToBeRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">rowsInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">rowsRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">runAllTests</span><span class="hl opt">() ) );</span>

    <span class="hl slc">// Special checks for inserting/removing</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">layoutAboutToBeChanged</span><span class="hl opt">() ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">layoutAboutToBeChanged</span><span class="hl opt">() ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">layoutChanged</span><span class="hl opt">() ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">layoutChanged</span><span class="hl opt">() ) );</span>

    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">rowsAboutToBeInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">rowsAboutToBeInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">rowsAboutToBeRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">rowsAboutToBeRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">rowsInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">rowsInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ) );</span>
    <span class="hl kwd">connect</span> <span class="hl opt">(</span> model<span class="hl opt">,</span> <span class="hl kwd">SIGNAL</span> <span class="hl opt">(</span> <span class="hl kwd">rowsRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ),</span>
              <span class="hl kwa">this</span><span class="hl opt">,</span> <span class="hl kwd">SLOT</span> <span class="hl opt">(</span> <span class="hl kwd">rowsRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;,</span> <span class="hl kwb">int</span><span class="hl opt">,</span> <span class="hl kwb">int</span> <span class="hl opt">) ) );</span>

    <span class="hl kwd">runAllTests</span><span class="hl opt">();</span>
<span class="hl opt">}</span>

<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">runAllTests</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> fetchingMore <span class="hl opt">)</span>
        <span class="hl kwa">return</span><span class="hl opt">;</span>
    <span class="hl kwd">nonDestructiveBasicTest</span><span class="hl opt">();</span>
    <span class="hl kwd">rowCount</span><span class="hl opt">();</span>
    <span class="hl kwd">columnCount</span><span class="hl opt">();</span>
    <span class="hl kwd">hasIndex</span><span class="hl opt">();</span>
    <span class="hl kwd">index</span><span class="hl opt">();</span>
    <span class="hl kwd">parent</span><span class="hl opt">();</span>
    <span class="hl kwd">data</span><span class="hl opt">();</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    nonDestructiveBasicTest tries to call a number of the basic functions (not all)</span>
<span class="hl com">    to make sure the model doesn't outright segfault, testing the functions that makes sense.</span>
<span class="hl com">*/</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">nonDestructiveBasicTest</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">buddy</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() ) ==</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">canFetchMore</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">columnCount</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() ) &gt;=</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() ) ==</span> <span class="hl kwd">QVariant</span><span class="hl opt">() );</span>
    fetchingMore <span class="hl opt">=</span> <span class="hl kwa">true</span><span class="hl opt">;</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">fetchMore</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    fetchingMore <span class="hl opt">=</span> <span class="hl kwa">false</span><span class="hl opt">;</span>
    Qt<span class="hl opt">::</span>ItemFlags flags <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">flags</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> flags <span class="hl opt">==</span> Qt<span class="hl opt">::</span>ItemIsDropEnabled <span class="hl opt">||</span> flags <span class="hl opt">==</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">hasChildren</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">headerData</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> Qt<span class="hl opt">::</span>Horizontal <span class="hl opt">);</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">itemData</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    QVariant cache<span class="hl opt">;</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">match</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">(), -</span><span class="hl num">1</span><span class="hl opt">,</span> cache <span class="hl opt">);</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">mimeTypes</span><span class="hl opt">();</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">parent</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() ) ==</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span><span class="hl opt">() &gt;=</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    QVariant variant<span class="hl opt">;</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">setData</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">(),</span> variant<span class="hl opt">, -</span><span class="hl num">1</span> <span class="hl opt">);</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">setHeaderData</span> <span class="hl opt">( -</span><span class="hl num">1</span><span class="hl opt">,</span> Qt<span class="hl opt">::</span>Horizontal<span class="hl opt">,</span> <span class="hl kwd">QVariant</span><span class="hl opt">() );</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">setHeaderData</span> <span class="hl opt">(</span> <span class="hl num">999999</span><span class="hl opt">,</span> Qt<span class="hl opt">::</span>Horizontal<span class="hl opt">,</span> <span class="hl kwd">QVariant</span><span class="hl opt">() );</span>
    QMap<span class="hl opt">&lt;</span><span class="hl kwb">int</span><span class="hl opt">,</span> QVariant<span class="hl opt">&gt;</span> roles<span class="hl opt">;</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">sibling</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">span</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    model<span class="hl opt">-&gt;</span><span class="hl kwd">supportedDropActions</span><span class="hl opt">();</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Tests model's implementation of QAbstractItemModel::rowCount() and hasChildren()</span>
<span class="hl com"></span>
<span class="hl com">    Models that are dynamically populated are not as fully tested here.</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">rowCount</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
<span class="hl slc">//     qDebug() &lt;&lt; &quot;rc&quot;;</span>
    <span class="hl slc">// check top row</span>
    QModelIndex topIndex <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwb">int</span> rows <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span> <span class="hl opt">(</span> topIndex <span class="hl opt">);</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> rows <span class="hl opt">&gt;=</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> rows <span class="hl opt">&gt;</span> <span class="hl num">0</span> <span class="hl opt">)</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">hasChildren</span> <span class="hl opt">(</span> topIndex <span class="hl opt">) );</span>

    QModelIndex secondLevelIndex <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> topIndex <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> secondLevelIndex<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span> <span class="hl slc">// not the top level</span>
        <span class="hl slc">// check a row count where parent is valid</span>
        rows <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span> <span class="hl opt">(</span> secondLevelIndex <span class="hl opt">);</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> rows <span class="hl opt">&gt;=</span> <span class="hl num">0</span> <span class="hl opt">);</span>
        <span class="hl kwa">if</span> <span class="hl opt">(</span> rows <span class="hl opt">&gt;</span> <span class="hl num">0</span> <span class="hl opt">)</span>
            <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">hasChildren</span> <span class="hl opt">(</span> secondLevelIndex <span class="hl opt">) );</span>
    <span class="hl opt">}</span>

    <span class="hl slc">// The models rowCount() is tested more extensively in checkChildren(),</span>
    <span class="hl slc">// but this catches the big mistakes</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Tests model's implementation of QAbstractItemModel::columnCount() and hasChildren()</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">columnCount</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
    <span class="hl slc">// check top row</span>
    QModelIndex topIndex <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">columnCount</span> <span class="hl opt">(</span> topIndex <span class="hl opt">) &gt;=</span> <span class="hl num">0</span> <span class="hl opt">);</span>

    <span class="hl slc">// check a column count where parent is valid</span>
    QModelIndex childIndex <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> topIndex <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> childIndex<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() )</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">columnCount</span> <span class="hl opt">(</span> childIndex <span class="hl opt">) &gt;=</span> <span class="hl num">0</span> <span class="hl opt">);</span>

    <span class="hl slc">// columnCount() is tested more extensively in checkChildren(),</span>
    <span class="hl slc">// but this catches the big mistakes</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Tests model's implementation of QAbstractItemModel::hasIndex()</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">hasIndex</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
<span class="hl slc">//     qDebug() &lt;&lt; &quot;hi&quot;;</span>
    <span class="hl slc">// Make sure that invalid values returns an invalid index</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">( !</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">( -</span><span class="hl num">2</span><span class="hl opt">, -</span><span class="hl num">2</span> <span class="hl opt">) );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">( !</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">( -</span><span class="hl num">2</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">) );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">( !</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">, -</span><span class="hl num">2</span> <span class="hl opt">) );</span>

    <span class="hl kwb">int</span> rows <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span><span class="hl opt">();</span>
    <span class="hl kwb">int</span> columns <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">columnCount</span><span class="hl opt">();</span>

    <span class="hl slc">// check out of bounds</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">( !</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">(</span> rows<span class="hl opt">,</span> columns <span class="hl opt">) );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">( !</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">(</span> rows <span class="hl opt">+</span> <span class="hl num">1</span><span class="hl opt">,</span> columns <span class="hl opt">+</span> <span class="hl num">1</span> <span class="hl opt">) );</span>

    <span class="hl kwa">if</span> <span class="hl opt">(</span> rows <span class="hl opt">&gt;</span> <span class="hl num">0</span> <span class="hl opt">)</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">) );</span>

    <span class="hl slc">// hasIndex() is tested more extensively in checkChildren(),</span>
    <span class="hl slc">// but this catches the big mistakes</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Tests model's implementation of QAbstractItemModel::index()</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">index</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
<span class="hl slc">//     qDebug() &lt;&lt; &quot;i&quot;;</span>
    <span class="hl slc">// Make sure that invalid values returns an invalid index</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">( -</span><span class="hl num">2</span><span class="hl opt">, -</span><span class="hl num">2</span> <span class="hl opt">) ==</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">( -</span><span class="hl num">2</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">) ==</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">, -</span><span class="hl num">2</span> <span class="hl opt">) ==</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>

    <span class="hl kwb">int</span> rows <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span><span class="hl opt">();</span>
    <span class="hl kwb">int</span> columns <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">columnCount</span><span class="hl opt">();</span>

    <span class="hl kwa">if</span> <span class="hl opt">(</span> rows <span class="hl opt">==</span> <span class="hl num">0</span> <span class="hl opt">)</span>
        <span class="hl kwa">return</span><span class="hl opt">;</span>

    <span class="hl slc">// Catch off by one errors</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> rows<span class="hl opt">,</span> columns <span class="hl opt">) ==</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">).</span><span class="hl kwd">isValid</span><span class="hl opt">() );</span>

    <span class="hl slc">// Make sure that the same index is *always* returned</span>
    QModelIndex a <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    QModelIndex b <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> a <span class="hl opt">==</span> b <span class="hl opt">);</span>

    <span class="hl slc">// index() is tested more extensively in checkChildren(),</span>
    <span class="hl slc">// but this catches the big mistakes</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Tests model's implementation of QAbstractItemModel::parent()</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">parent</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
<span class="hl slc">//     qDebug() &lt;&lt; &quot;p&quot;;</span>
    <span class="hl slc">// Make sure the model wont crash and will return an invalid QModelIndex</span>
    <span class="hl slc">// when asked for the parent of an invalid index.</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">parent</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() ) ==</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>

    <span class="hl kwa">if</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span><span class="hl opt">() ==</span> <span class="hl num">0</span> <span class="hl opt">)</span>
        <span class="hl kwa">return</span><span class="hl opt">;</span>

    <span class="hl slc">// Column 0                | Column 1    |</span>
    <span class="hl slc">// QModelIndex()           |             |</span>
    <span class="hl slc">//    \- topIndex          | topIndex1   |</span>
    <span class="hl slc">//         \- childIndex   | childIndex1 |</span>

    <span class="hl slc">// Common error test #1, make sure that a top level index has a parent</span>
    <span class="hl slc">// that is a invalid QModelIndex.</span>
    QModelIndex topIndex <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">parent</span> <span class="hl opt">(</span> topIndex <span class="hl opt">) ==</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>

    <span class="hl slc">// Common error test #2, make sure that a second level index has a parent</span>
    <span class="hl slc">// that is the first level index.</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span> <span class="hl opt">(</span> topIndex <span class="hl opt">) &gt;</span> <span class="hl num">0</span> <span class="hl opt">) {</span>
        QModelIndex childIndex <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> topIndex <span class="hl opt">);</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">parent</span> <span class="hl opt">(</span> childIndex <span class="hl opt">) ==</span> topIndex <span class="hl opt">);</span>
    <span class="hl opt">}</span>

    <span class="hl slc">// Common error test #3, the second column should NOT have the same children</span>
    <span class="hl slc">// as the first column in a row.</span>
    <span class="hl slc">// Usually the second column shouldn't have children.</span>
    QModelIndex topIndex1 <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span> <span class="hl opt">(</span> topIndex1 <span class="hl opt">) &gt;</span> <span class="hl num">0</span> <span class="hl opt">) {</span>
        QModelIndex childIndex <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> topIndex <span class="hl opt">);</span>
        QModelIndex childIndex1 <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> topIndex1 <span class="hl opt">);</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> childIndex <span class="hl opt">!=</span> childIndex1 <span class="hl opt">);</span>
    <span class="hl opt">}</span>

    <span class="hl slc">// Full test, walk n levels deep through the model making sure that all</span>
    <span class="hl slc">// parent's children correctly specify their parent.</span>
    <span class="hl kwd">checkChildren</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() );</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Called from the parent() test.</span>
<span class="hl com"></span>
<span class="hl com">    A model that returns an index of parent X should also return X when asking</span>
<span class="hl com">    for the parent of the index.</span>
<span class="hl com"></span>
<span class="hl com">    This recursive function does pretty extensive testing on the whole model in an</span>
<span class="hl com">    effort to catch edge cases.</span>
<span class="hl com"></span>
<span class="hl com">    This function assumes that rowCount(), columnCount() and index() already work.</span>
<span class="hl com">    If they have a bug it will point it out, but the above tests should have already</span>
<span class="hl com">    found the basic bugs because it is easier to figure out the problem in</span>
<span class="hl com">    those tests then this one.</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">checkChildren</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span>parent<span class="hl opt">,</span> <span class="hl kwb">int</span> currentDepth <span class="hl opt">)</span>
<span class="hl opt">{</span>
    <span class="hl slc">// First just try walking back up the tree.</span>
    QModelIndex p <span class="hl opt">=</span> parent<span class="hl opt">;</span>
    <span class="hl kwa">while</span> <span class="hl opt">(</span> p<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() )</span>
        p <span class="hl opt">=</span> p<span class="hl opt">.</span><span class="hl kwd">parent</span><span class="hl opt">();</span>

    <span class="hl slc">// For models that are dynamically populated</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">canFetchMore</span> <span class="hl opt">(</span> parent <span class="hl opt">) ) {</span>
        fetchingMore <span class="hl opt">=</span> <span class="hl kwa">true</span><span class="hl opt">;</span>
        model<span class="hl opt">-&gt;</span><span class="hl kwd">fetchMore</span> <span class="hl opt">(</span> parent <span class="hl opt">);</span>
        fetchingMore <span class="hl opt">=</span> <span class="hl kwa">false</span><span class="hl opt">;</span>
    <span class="hl opt">}</span>

    <span class="hl kwb">int</span> rows <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span> <span class="hl opt">(</span> parent <span class="hl opt">);</span>
    <span class="hl kwb">int</span> columns <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">columnCount</span> <span class="hl opt">(</span> parent <span class="hl opt">);</span>

    <span class="hl kwa">if</span> <span class="hl opt">(</span> rows <span class="hl opt">&gt;</span> <span class="hl num">0</span> <span class="hl opt">)</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">hasChildren</span> <span class="hl opt">(</span> parent <span class="hl opt">) );</span>

    <span class="hl slc">// Some further testing against rows(), columns(), and hasChildren()</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> rows <span class="hl opt">&gt;=</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> columns <span class="hl opt">&gt;=</span> <span class="hl num">0</span> <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> rows <span class="hl opt">&gt;</span> <span class="hl num">0</span> <span class="hl opt">)</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">hasChildren</span> <span class="hl opt">(</span> parent <span class="hl opt">) );</span>

    <span class="hl slc">//qDebug() &lt;&lt; &quot;parent:&quot; &lt;&lt; model-&gt;data(parent).toString() &lt;&lt; &quot;rows:&quot; &lt;&lt; rows</span>
    <span class="hl slc">//         &lt;&lt; &quot;columns:&quot; &lt;&lt; columns &lt;&lt; &quot;parent column:&quot; &lt;&lt; parent.column();</span>

    <span class="hl kwd">QVERIFY</span><span class="hl opt">( !</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">(</span> rows <span class="hl opt">+</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> parent <span class="hl opt">) );</span>
    <span class="hl kwa">for</span> <span class="hl opt">(</span> <span class="hl kwb">int</span> r <span class="hl opt">=</span> <span class="hl num">0</span><span class="hl opt">;</span> r <span class="hl opt">&lt;</span> rows<span class="hl opt">; ++</span>r <span class="hl opt">) {</span>
        <span class="hl kwa">if</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">canFetchMore</span> <span class="hl opt">(</span> parent <span class="hl opt">) ) {</span>
            fetchingMore <span class="hl opt">=</span> <span class="hl kwa">true</span><span class="hl opt">;</span>
            model<span class="hl opt">-&gt;</span><span class="hl kwd">fetchMore</span> <span class="hl opt">(</span> parent <span class="hl opt">);</span>
            fetchingMore <span class="hl opt">=</span> <span class="hl kwa">false</span><span class="hl opt">;</span>
        <span class="hl opt">}</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">( !</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">(</span> r<span class="hl opt">,</span> columns <span class="hl opt">+</span> <span class="hl num">1</span><span class="hl opt">,</span> parent <span class="hl opt">) );</span>
        <span class="hl kwa">for</span> <span class="hl opt">(</span> <span class="hl kwb">int</span> c <span class="hl opt">=</span> <span class="hl num">0</span><span class="hl opt">;</span> c <span class="hl opt">&lt;</span> columns<span class="hl opt">; ++</span>c <span class="hl opt">) {</span>
            <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">hasIndex</span> <span class="hl opt">(</span> r<span class="hl opt">,</span> c<span class="hl opt">,</span> parent <span class="hl opt">) );</span>
            QModelIndex index <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> r<span class="hl opt">,</span> c<span class="hl opt">,</span> parent <span class="hl opt">);</span>
            <span class="hl slc">// rowCount() and columnCount() said that it existed...</span>
            <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> index<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() );</span>

            <span class="hl slc">// index() should always return the same index when called twice in a row</span>
            QModelIndex modifiedIndex <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> r<span class="hl opt">,</span> c<span class="hl opt">,</span> parent <span class="hl opt">);</span>
            <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> index <span class="hl opt">==</span> modifiedIndex <span class="hl opt">);</span>

            <span class="hl slc">// Make sure we get the same index if we request it twice in a row</span>
            QModelIndex a <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> r<span class="hl opt">,</span> c<span class="hl opt">,</span> parent <span class="hl opt">);</span>
            QModelIndex b <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> r<span class="hl opt">,</span> c<span class="hl opt">,</span> parent <span class="hl opt">);</span>
            <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> a <span class="hl opt">==</span> b <span class="hl opt">);</span>

            <span class="hl slc">// Some basic checking on the index that is returned</span>
            <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> index<span class="hl opt">.</span><span class="hl kwd">model</span><span class="hl opt">() ==</span> model <span class="hl opt">);</span>
            <span class="hl kwd">QCOMPARE</span><span class="hl opt">(</span> index<span class="hl opt">.</span><span class="hl kwd">row</span><span class="hl opt">(),</span> r <span class="hl opt">);</span>
            <span class="hl kwd">QCOMPARE</span><span class="hl opt">(</span> index<span class="hl opt">.</span><span class="hl kwd">column</span><span class="hl opt">(),</span> c <span class="hl opt">);</span>
            <span class="hl slc">// While you can technically return a QVariant usually this is a sign</span>
            <span class="hl slc">// of a bug in data().  Disable if this really is ok in your model.</span>
<span class="hl slc">//            QVERIFY( model-&gt;data ( index, Qt::DisplayRole ).isValid() );</span>

            <span class="hl slc">// If the next test fails here is some somewhat useful debug you play with.</span>

            <span class="hl kwa">if</span> <span class="hl opt">(</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">parent</span><span class="hl opt">(</span>index<span class="hl opt">) !=</span> parent<span class="hl opt">) {</span>
                <span class="hl kwd">qDebug</span><span class="hl opt">() &lt;&lt;</span> r <span class="hl opt">&lt;&lt;</span> c <span class="hl opt">&lt;&lt;</span> currentDepth <span class="hl opt">&lt;&lt;</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span><span class="hl opt">(</span>index<span class="hl opt">).</span><span class="hl kwd">toString</span><span class="hl opt">()</span>
                         <span class="hl opt">&lt;&lt;</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span><span class="hl opt">(</span>parent<span class="hl opt">).</span><span class="hl kwd">toString</span><span class="hl opt">();</span>
                <span class="hl kwd">qDebug</span><span class="hl opt">() &lt;&lt;</span> index <span class="hl opt">&lt;&lt;</span> parent <span class="hl opt">&lt;&lt;</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">parent</span><span class="hl opt">(</span>index<span class="hl opt">);</span>
<span class="hl slc">//                 And a view that you can even use to show the model.</span>
<span class="hl slc">//                 QTreeView view;</span>
<span class="hl slc">//                 view.setModel(model);</span>
<span class="hl slc">//                 view.show();</span>
            <span class="hl opt">}</span>

            <span class="hl slc">// Check that we can get back our real parent.</span>
            <span class="hl kwd">QCOMPARE</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">parent</span> <span class="hl opt">(</span> index <span class="hl opt">),</span> parent <span class="hl opt">);</span>

            <span class="hl slc">// recursively go down the children</span>
            <span class="hl kwa">if</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">hasChildren</span> <span class="hl opt">(</span> index <span class="hl opt">) &amp;&amp;</span> currentDepth <span class="hl opt">&lt;</span> <span class="hl num">10</span> <span class="hl opt">) {</span>
                <span class="hl slc">//qDebug() &lt;&lt; r &lt;&lt; c &lt;&lt; &quot;has children&quot; &lt;&lt; model-&gt;rowCount(index);</span>
                <span class="hl kwd">checkChildren</span> <span class="hl opt">(</span> index<span class="hl opt">, ++</span>currentDepth <span class="hl opt">);</span>
            <span class="hl opt">}</span><span class="hl com">/* else { if (currentDepth &gt;= 10) qDebug() &lt;&lt; &quot;checked 10 deep&quot;; };*/</span>

            <span class="hl slc">// make sure that after testing the children that the index doesn't change.</span>
            QModelIndex newerIndex <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> r<span class="hl opt">,</span> c<span class="hl opt">,</span> parent <span class="hl opt">);</span>
            <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> index <span class="hl opt">==</span> newerIndex <span class="hl opt">);</span>
        <span class="hl opt">}</span>
    <span class="hl opt">}</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Tests model's implementation of QAbstractItemModel::data()</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">data</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
    <span class="hl slc">// Invalid index should return an invalid qvariant</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">( !</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">() ).</span><span class="hl kwd">isValid</span><span class="hl opt">() );</span>

    <span class="hl kwa">if</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span><span class="hl opt">() ==</span> <span class="hl num">0</span> <span class="hl opt">)</span>
        <span class="hl kwa">return</span><span class="hl opt">;</span>

    <span class="hl slc">// A valid index should have a valid QVariant data</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">).</span><span class="hl kwd">isValid</span><span class="hl opt">() );</span>

    <span class="hl slc">// shouldn't be able to set data on an invalid index</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">( !</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">setData</span> <span class="hl opt">(</span> <span class="hl kwd">QModelIndex</span><span class="hl opt">(),</span> <span class="hl kwd">QLatin1String</span> <span class="hl opt">(</span> <span class="hl str">&quot;foo&quot;</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>DisplayRole <span class="hl opt">) );</span>

    <span class="hl slc">// General Purpose roles that should return a QString</span>
    QVariant variant <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>ToolTipRole <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> variant<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> qVariantCanConvert<span class="hl opt">&lt;</span>QString<span class="hl opt">&gt; (</span> variant <span class="hl opt">) );</span>
    <span class="hl opt">}</span>
    variant <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>StatusTipRole <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> variant<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> qVariantCanConvert<span class="hl opt">&lt;</span>QString<span class="hl opt">&gt; (</span> variant <span class="hl opt">) );</span>
    <span class="hl opt">}</span>
    variant <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>WhatsThisRole <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> variant<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> qVariantCanConvert<span class="hl opt">&lt;</span>QString<span class="hl opt">&gt; (</span> variant <span class="hl opt">) );</span>
    <span class="hl opt">}</span>

    <span class="hl slc">// General Purpose roles that should return a QSize</span>
    variant <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>SizeHintRole <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> variant<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> qVariantCanConvert<span class="hl opt">&lt;</span>QSize<span class="hl opt">&gt; (</span> variant <span class="hl opt">) );</span>
    <span class="hl opt">}</span>

    <span class="hl slc">// General Purpose roles that should return a QFont</span>
    QVariant fontVariant <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>FontRole <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> fontVariant<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> qVariantCanConvert<span class="hl opt">&lt;</span>QFont<span class="hl opt">&gt; (</span> fontVariant <span class="hl opt">) );</span>
    <span class="hl opt">}</span>

    <span class="hl slc">// Check that the alignment is one we know about</span>
    QVariant textAlignmentVariant <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>TextAlignmentRole <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> textAlignmentVariant<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span>
        <span class="hl kwb">int</span> alignment <span class="hl opt">=</span> textAlignmentVariant<span class="hl opt">.</span><span class="hl kwd">toInt</span><span class="hl opt">();</span>
        <span class="hl kwd">QCOMPARE</span><span class="hl opt">(</span> alignment<span class="hl opt">, (</span> alignment <span class="hl opt">&amp; (</span> Qt<span class="hl opt">::</span>AlignHorizontal_Mask <span class="hl opt">|</span> Qt<span class="hl opt">::</span>AlignVertical_Mask <span class="hl opt">) ) );</span>
    <span class="hl opt">}</span>

    <span class="hl slc">// General Purpose roles that should return a QColor</span>
    QVariant colorVariant <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>BackgroundColorRole <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> colorVariant<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> qVariantCanConvert<span class="hl opt">&lt;</span>QColor<span class="hl opt">&gt; (</span> colorVariant <span class="hl opt">) );</span>
    <span class="hl opt">}</span>

    colorVariant <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>TextColorRole <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> colorVariant<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> qVariantCanConvert<span class="hl opt">&lt;</span>QColor<span class="hl opt">&gt; (</span> colorVariant <span class="hl opt">) );</span>
    <span class="hl opt">}</span>

    <span class="hl slc">// Check that the &quot;check state&quot; is one we know about.</span>
    QVariant checkStateVariant <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">),</span> Qt<span class="hl opt">::</span>CheckStateRole <span class="hl opt">);</span>
    <span class="hl kwa">if</span> <span class="hl opt">(</span> checkStateVariant<span class="hl opt">.</span><span class="hl kwd">isValid</span><span class="hl opt">() ) {</span>
        <span class="hl kwb">int</span> state <span class="hl opt">=</span> checkStateVariant<span class="hl opt">.</span><span class="hl kwd">toInt</span><span class="hl opt">();</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> state <span class="hl opt">==</span> Qt<span class="hl opt">::</span>Unchecked <span class="hl opt">||</span>
                 state <span class="hl opt">==</span> Qt<span class="hl opt">::</span>PartiallyChecked <span class="hl opt">||</span>
                 state <span class="hl opt">==</span> Qt<span class="hl opt">::</span>Checked <span class="hl opt">);</span>
    <span class="hl opt">}</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Store what is about to be inserted to make sure it actually happens</span>
<span class="hl com"></span>
<span class="hl com">    \sa rowsInserted()</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">rowsAboutToBeInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span>parent<span class="hl opt">,</span> <span class="hl kwb">int</span> start<span class="hl opt">,</span> <span class="hl kwb">int</span> end <span class="hl opt">)</span>
<span class="hl opt">{</span>
<span class="hl slc">//     Q_UNUSED(end);</span>
<span class="hl slc">//    qDebug() &lt;&lt; &quot;rowsAboutToBeInserted&quot; &lt;&lt; &quot;start=&quot; &lt;&lt; start &lt;&lt; &quot;end=&quot; &lt;&lt; end &lt;&lt; &quot;parent=&quot; &lt;&lt; model-&gt;data ( parent ).toString()</span>
<span class="hl slc">//    &lt;&lt; &quot;current count of parent=&quot; &lt;&lt; model-&gt;rowCount ( parent ); // &lt;&lt; &quot;display of last=&quot; &lt;&lt; model-&gt;data( model-&gt;index(start-1, 0, parent) );</span>
<span class="hl slc">//     qDebug() &lt;&lt; model-&gt;index(start-1, 0, parent) &lt;&lt; model-&gt;data( model-&gt;index(start-1, 0, parent) );</span>
    Changing c<span class="hl opt">;</span>
    c<span class="hl opt">.</span>parent <span class="hl opt">=</span> parent<span class="hl opt">;</span>
    c<span class="hl opt">.</span>oldSize <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span> <span class="hl opt">(</span> parent <span class="hl opt">);</span>
    c<span class="hl opt">.</span>last <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> start <span class="hl opt">-</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> parent <span class="hl opt">) );</span>
    c<span class="hl opt">.</span>next <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> start<span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> parent <span class="hl opt">) );</span>
    insert<span class="hl opt">.</span><span class="hl kwd">push</span> <span class="hl opt">(</span> c <span class="hl opt">);</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Confirm that what was said was going to happen actually did</span>
<span class="hl com"></span>
<span class="hl com">    \sa rowsAboutToBeInserted()</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">rowsInserted</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span> parent<span class="hl opt">,</span> <span class="hl kwb">int</span> start<span class="hl opt">,</span> <span class="hl kwb">int</span> end <span class="hl opt">)</span>
<span class="hl opt">{</span>
    Changing c <span class="hl opt">=</span> insert<span class="hl opt">.</span><span class="hl kwd">pop</span><span class="hl opt">();</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> c<span class="hl opt">.</span>parent <span class="hl opt">==</span> parent <span class="hl opt">);</span>
<span class="hl slc">//    qDebug() &lt;&lt; &quot;rowsInserted&quot;  &lt;&lt; &quot;start=&quot; &lt;&lt; start &lt;&lt; &quot;end=&quot; &lt;&lt; end &lt;&lt; &quot;oldsize=&quot; &lt;&lt; c.oldSize</span>
<span class="hl slc">//    &lt;&lt; &quot;parent=&quot; &lt;&lt; model-&gt;data ( parent ).toString() &lt;&lt; &quot;current rowcount of parent=&quot; &lt;&lt; model-&gt;rowCount ( parent );</span>

<span class="hl slc">//    for (int ii=start; ii &lt;= end; ii++)</span>
<span class="hl slc">//    {</span>
<span class="hl slc">//      qDebug() &lt;&lt; &quot;itemWasInserted:&quot; &lt;&lt; ii &lt;&lt; model-&gt;data ( model-&gt;index ( ii, 0, parent ));</span>
<span class="hl slc">//    }</span>
<span class="hl slc">//    qDebug();</span>

    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> c<span class="hl opt">.</span>oldSize <span class="hl opt">+ (</span> end <span class="hl opt">-</span> start <span class="hl opt">+</span> <span class="hl num">1</span> <span class="hl opt">) ==</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span> <span class="hl opt">(</span> parent <span class="hl opt">) );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> c<span class="hl opt">.</span>last <span class="hl opt">==</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> start <span class="hl opt">-</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> c<span class="hl opt">.</span>parent <span class="hl opt">) ) );</span>

    <span class="hl kwa">if</span> <span class="hl opt">(</span>c<span class="hl opt">.</span>next <span class="hl opt">!=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span><span class="hl opt">(</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span><span class="hl opt">(</span>end <span class="hl opt">+</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> c<span class="hl opt">.</span>parent<span class="hl opt">))) {</span>
        <span class="hl kwd">qDebug</span><span class="hl opt">() &lt;&lt;</span> start <span class="hl opt">&lt;&lt;</span> end<span class="hl opt">;</span>
        <span class="hl kwa">for</span> <span class="hl opt">(</span><span class="hl kwb">int</span> i<span class="hl opt">=</span><span class="hl num">0</span><span class="hl opt">;</span> i <span class="hl opt">&lt;</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span><span class="hl opt">(); ++</span>i<span class="hl opt">)</span>
            <span class="hl kwd">qDebug</span><span class="hl opt">() &lt;&lt;</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span><span class="hl opt">(</span>i<span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">).</span><span class="hl kwd">data</span><span class="hl opt">().</span><span class="hl kwd">toString</span><span class="hl opt">();</span>
        <span class="hl kwd">qDebug</span><span class="hl opt">() &lt;&lt;</span> c<span class="hl opt">.</span>next <span class="hl opt">&lt;&lt;</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span><span class="hl opt">(</span>model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span><span class="hl opt">(</span>end <span class="hl opt">+</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> c<span class="hl opt">.</span>parent<span class="hl opt">));</span>
    <span class="hl opt">}</span>

    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> c<span class="hl opt">.</span>next <span class="hl opt">==</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> end <span class="hl opt">+</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> c<span class="hl opt">.</span>parent <span class="hl opt">) ) );</span>
<span class="hl opt">}</span>

<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">layoutAboutToBeChanged</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
    <span class="hl kwa">for</span> <span class="hl opt">(</span> <span class="hl kwb">int</span> i <span class="hl opt">=</span> <span class="hl num">0</span><span class="hl opt">;</span> i <span class="hl opt">&lt;</span> <span class="hl kwd">qBound</span> <span class="hl opt">(</span> <span class="hl num">0</span><span class="hl opt">,</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span><span class="hl opt">(),</span> <span class="hl num">100</span> <span class="hl opt">); ++</span>i <span class="hl opt">)</span>
        changing<span class="hl opt">.</span><span class="hl kwd">append</span> <span class="hl opt">(</span> <span class="hl kwd">QPersistentModelIndex</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> i<span class="hl opt">,</span> <span class="hl num">0</span> <span class="hl opt">) ) );</span>
<span class="hl opt">}</span>

<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">layoutChanged</span><span class="hl opt">()</span>
<span class="hl opt">{</span>
    <span class="hl kwa">for</span> <span class="hl opt">(</span> <span class="hl kwb">int</span> i <span class="hl opt">=</span> <span class="hl num">0</span><span class="hl opt">;</span> i <span class="hl opt">&lt;</span> changing<span class="hl opt">.</span><span class="hl kwd">count</span><span class="hl opt">(); ++</span>i <span class="hl opt">) {</span>
        QPersistentModelIndex p <span class="hl opt">=</span> changing<span class="hl opt">[</span>i<span class="hl opt">];</span>
        <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> p <span class="hl opt">==</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> p<span class="hl opt">.</span><span class="hl kwd">row</span><span class="hl opt">(),</span> p<span class="hl opt">.</span><span class="hl kwd">column</span><span class="hl opt">(),</span> p<span class="hl opt">.</span><span class="hl kwd">parent</span><span class="hl opt">() ) );</span>
    <span class="hl opt">}</span>
    changing<span class="hl opt">.</span><span class="hl kwd">clear</span><span class="hl opt">();</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Store what is about to be inserted to make sure it actually happens</span>
<span class="hl com"></span>
<span class="hl com">    \sa rowsRemoved()</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">rowsAboutToBeRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span>parent<span class="hl opt">,</span> <span class="hl kwb">int</span> start<span class="hl opt">,</span> <span class="hl kwb">int</span> end <span class="hl opt">)</span>
<span class="hl opt">{</span>
<span class="hl kwd">qDebug</span><span class="hl opt">() &lt;&lt;</span> <span class="hl str">&quot;ratbr&quot;</span> <span class="hl opt">&lt;&lt;</span> parent <span class="hl opt">&lt;&lt;</span> start <span class="hl opt">&lt;&lt;</span> end<span class="hl opt">;</span>
    Changing c<span class="hl opt">;</span>
    c<span class="hl opt">.</span>parent <span class="hl opt">=</span> parent<span class="hl opt">;</span>
    c<span class="hl opt">.</span>oldSize <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span> <span class="hl opt">(</span> parent <span class="hl opt">);</span>
    c<span class="hl opt">.</span>last <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> start <span class="hl opt">-</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> parent <span class="hl opt">) );</span>
    c<span class="hl opt">.</span>next <span class="hl opt">=</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> end <span class="hl opt">+</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> parent <span class="hl opt">) );</span>
    remove<span class="hl opt">.</span><span class="hl kwd">push</span> <span class="hl opt">(</span> c <span class="hl opt">);</span>
<span class="hl opt">}</span>

<span class="hl com">/*!</span>
<span class="hl com">    Confirm that what was said was going to happen actually did</span>
<span class="hl com"></span>
<span class="hl com">    \sa rowsAboutToBeRemoved()</span>
<span class="hl com"> */</span>
<span class="hl kwb">void</span> ModelTest<span class="hl opt">::</span><span class="hl kwd">rowsRemoved</span> <span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span> parent<span class="hl opt">,</span> <span class="hl kwb">int</span> start<span class="hl opt">,</span> <span class="hl kwb">int</span> end <span class="hl opt">)</span>
<span class="hl opt">{</span>
  <span class="hl kwd">qDebug</span><span class="hl opt">() &lt;&lt;</span> <span class="hl str">&quot;rr&quot;</span> <span class="hl opt">&lt;&lt;</span> parent <span class="hl opt">&lt;&lt;</span> start <span class="hl opt">&lt;&lt;</span> end<span class="hl opt">;</span>
    Changing c <span class="hl opt">=</span> remove<span class="hl opt">.</span><span class="hl kwd">pop</span><span class="hl opt">();</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> c<span class="hl opt">.</span>parent <span class="hl opt">==</span> parent <span class="hl opt">);</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> c<span class="hl opt">.</span>oldSize <span class="hl opt">- (</span> end <span class="hl opt">-</span> start <span class="hl opt">+</span> <span class="hl num">1</span> <span class="hl opt">) ==</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">rowCount</span> <span class="hl opt">(</span> parent <span class="hl opt">) );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> c<span class="hl opt">.</span>last <span class="hl opt">==</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> start <span class="hl opt">-</span> <span class="hl num">1</span><span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> c<span class="hl opt">.</span>parent <span class="hl opt">) ) );</span>
    <span class="hl kwd">QVERIFY</span><span class="hl opt">(</span> c<span class="hl opt">.</span>next <span class="hl opt">==</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">data</span> <span class="hl opt">(</span> model<span class="hl opt">-&gt;</span><span class="hl kwd">index</span> <span class="hl opt">(</span> start<span class="hl opt">,</span> <span class="hl num">0</span><span class="hl opt">,</span> c<span class="hl opt">.</span>parent <span class="hl opt">) ) );</span>
<span class="hl opt">}</span>


</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated by <a href='http://git.zx2c4.com/cgit/about/'>cgit v0.11.0</a> at 2015-11-06 07:18:13 (GMT)</div>
</div> <!-- id=cgit -->
</body>
</html>
