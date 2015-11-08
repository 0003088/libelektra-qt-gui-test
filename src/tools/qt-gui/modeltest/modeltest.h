<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns='http://www.w3.org/1999/xhtml' xml:lang='en' lang='en'>
<head>
<title>qt/qt.git - Qt 4.x. This repository is limited to security fixes at this point.</title>
<meta name='generator' content='cgit v0.11.0'/>
<meta name='robots' content='index, nofollow'/>
<link rel='stylesheet' type='text/css' href='/cgit-data/cgit.css'/>
<link rel='shortcut icon' href='/favicon.ico'/>
<link rel='alternate' title='Atom feed' href='http://code.qt.io/cgit/qt/qt.git/atom/tests/auto/modeltest/modeltest.h?h=4.8' type='application/atom+xml'/>
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
<a href='/cgit/qt/qt.git/'>summary</a><a href='/cgit/qt/qt.git/refs/'>refs</a><a href='/cgit/qt/qt.git/log/tests/auto/modeltest/modeltest.h'>log</a><a class='active' href='/cgit/qt/qt.git/tree/tests/auto/modeltest/modeltest.h'>tree</a><a href='/cgit/qt/qt.git/commit/tests/auto/modeltest/modeltest.h'>commit</a><a href='/cgit/qt/qt.git/diff/tests/auto/modeltest/modeltest.h'>diff</a><a href='/cgit/qt/qt.git/stats/tests/auto/modeltest/modeltest.h'>stats</a></td><td class='form'><form class='right' method='get' action='/cgit/qt/qt.git/log/tests/auto/modeltest/modeltest.h'>
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
<div class='path'>path: <a href='/cgit/qt/qt.git/tree/'>root</a>/<a href='/cgit/qt/qt.git/tree/tests'>tests</a>/<a href='/cgit/qt/qt.git/tree/tests/auto'>auto</a>/<a href='/cgit/qt/qt.git/tree/tests/auto/modeltest'>modeltest</a>/<a href='/cgit/qt/qt.git/tree/tests/auto/modeltest/modeltest.h'>modeltest.h</a></div><div class='content'>blob: 7843196d3aebb1059d115823adff8942ea61c525 (<a href='/cgit/qt/qt.git/plain/tests/auto/modeltest/modeltest.h'>plain</a>)
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


<span class="hl ppc">#ifndef MODELTEST_H</span>
<span class="hl ppc">#define MODELTEST_H</span>

<span class="hl ppc">#include &lt;QtCore/QObject&gt;</span>
<span class="hl ppc">#include &lt;QtCore/QAbstractItemModel&gt;</span>
<span class="hl ppc">#include &lt;QtCore/QStack&gt;</span>

<span class="hl kwc">class</span> ModelTest <span class="hl opt">:</span> <span class="hl kwc">public</span> QObject
<span class="hl opt">{</span>
  Q_OBJECT

<span class="hl kwc">public</span><span class="hl opt">:</span>
  <span class="hl kwd">ModelTest</span><span class="hl opt">(</span> QAbstractItemModel <span class="hl opt">*</span>model<span class="hl opt">,</span> QObject <span class="hl opt">*</span>parent <span class="hl opt">=</span> <span class="hl num">0</span> <span class="hl opt">);</span>

<span class="hl kwc">private</span> Q_SLOTS<span class="hl opt">:</span>
  <span class="hl kwb">void</span> <span class="hl kwd">nonDestructiveBasicTest</span><span class="hl opt">();</span>
  <span class="hl kwb">void</span> <span class="hl kwd">rowCount</span><span class="hl opt">();</span>
  <span class="hl kwb">void</span> <span class="hl kwd">columnCount</span><span class="hl opt">();</span>
  <span class="hl kwb">void</span> <span class="hl kwd">hasIndex</span><span class="hl opt">();</span>
  <span class="hl kwb">void</span> <span class="hl kwd">index</span><span class="hl opt">();</span>
  <span class="hl kwb">void</span> <span class="hl kwd">parent</span><span class="hl opt">();</span>
  <span class="hl kwb">void</span> <span class="hl kwd">data</span><span class="hl opt">();</span>

<span class="hl kwc">protected</span> Q_SLOTS<span class="hl opt">:</span>
  <span class="hl kwb">void</span> <span class="hl kwd">runAllTests</span><span class="hl opt">();</span>
  <span class="hl kwb">void</span> <span class="hl kwd">layoutAboutToBeChanged</span><span class="hl opt">();</span>
  <span class="hl kwb">void</span> <span class="hl kwd">layoutChanged</span><span class="hl opt">();</span>
  <span class="hl kwb">void</span> <span class="hl kwd">rowsAboutToBeInserted</span><span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span>parent<span class="hl opt">,</span> <span class="hl kwb">int</span> start<span class="hl opt">,</span> <span class="hl kwb">int</span> end <span class="hl opt">);</span>
  <span class="hl kwb">void</span> <span class="hl kwd">rowsInserted</span><span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span> parent<span class="hl opt">,</span> <span class="hl kwb">int</span> start<span class="hl opt">,</span> <span class="hl kwb">int</span> end <span class="hl opt">);</span>
  <span class="hl kwb">void</span> <span class="hl kwd">rowsAboutToBeRemoved</span><span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span>parent<span class="hl opt">,</span> <span class="hl kwb">int</span> start<span class="hl opt">,</span> <span class="hl kwb">int</span> end <span class="hl opt">);</span>
  <span class="hl kwb">void</span> <span class="hl kwd">rowsRemoved</span><span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span> parent<span class="hl opt">,</span> <span class="hl kwb">int</span> start<span class="hl opt">,</span> <span class="hl kwb">int</span> end <span class="hl opt">);</span>

<span class="hl kwc">private</span><span class="hl opt">:</span>
  <span class="hl kwb">void</span> <span class="hl kwd">checkChildren</span><span class="hl opt">(</span> <span class="hl kwb">const</span> QModelIndex <span class="hl opt">&amp;</span>parent<span class="hl opt">,</span> <span class="hl kwb">int</span> currentDepth <span class="hl opt">=</span> <span class="hl num">0</span> <span class="hl opt">);</span>

  QAbstractItemModel <span class="hl opt">*</span>model<span class="hl opt">;</span>

  <span class="hl kwb">struct</span> Changing <span class="hl opt">{</span>
    QModelIndex parent<span class="hl opt">;</span>
    <span class="hl kwb">int</span> oldSize<span class="hl opt">;</span>
    QVariant last<span class="hl opt">;</span>
    QVariant next<span class="hl opt">;</span>
  <span class="hl opt">};</span>
  QStack<span class="hl opt">&lt;</span>Changing<span class="hl opt">&gt;</span> insert<span class="hl opt">;</span>
  QStack<span class="hl opt">&lt;</span>Changing<span class="hl opt">&gt;</span> remove<span class="hl opt">;</span>

  <span class="hl kwb">bool</span> fetchingMore<span class="hl opt">;</span>

  QList<span class="hl opt">&lt;</span>QPersistentModelIndex<span class="hl opt">&gt;</span> changing<span class="hl opt">;</span>
<span class="hl opt">};</span>

<span class="hl ppc">#endif</span>
</code></pre></td></tr></table>
</div> <!-- class=content -->
<div class='footer'>generated by <a href='http://git.zx2c4.com/cgit/about/'>cgit v0.11.0</a> at 2015-11-06 07:18:19 (GMT)</div>
</div> <!-- id=cgit -->
</body>
</html>
