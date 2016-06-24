<!DOCTYPE html>
<!-- saved from url=(0067)https://github.com/RobTillaart/Arduino/tree/master/libraries/DHTlib -->
<html lang="en" class=" is-copy-enabled"><head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#"><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    <meta name="viewport" content="width=1020">
    
    
    <title>Arduino/libraries/DHTlib at master · RobTillaart/Arduino · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="https://github.com/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="https://github.com/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="https://github.com/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="https://github.com/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="https://github.com/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site"><meta content="summary" name="twitter:card"><meta content="RobTillaart/Arduino" name="twitter:title"><meta content="Arduino - libs and code" name="twitter:description"><meta content="https://avatars2.githubusercontent.com/u/462844?v=3&amp;s=400" name="twitter:image:src">
      <meta content="GitHub" property="og:site_name"><meta content="object" property="og:type"><meta content="https://avatars2.githubusercontent.com/u/462844?v=3&amp;s=400" property="og:image"><meta content="RobTillaart/Arduino" property="og:title"><meta content="https://github.com/RobTillaart/Arduino" property="og:url"><meta content="Arduino - libs and code" property="og:description">
      <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">
    <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">
    <link rel="assets" href="https://assets-cdn.github.com/">
    
    <meta name="pjax-timeout" content="1000">
    

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    

    <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host"><meta content="github" name="octolytics-app-id"><meta content="51F571A8:35CF:19BECBE:56675ABC" name="octolytics-dimension-request_id">




  <meta class="js-ga-set" name="dimension1" content="Logged Out">



        <meta name="hostname" content="github.com">
    <meta name="user-login" content="">

        <meta name="expected-hostname" content="github.com">

      <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#4078c0">
      <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

    <meta content="7c5a56864fb991ed0267c9d4acea23377d41a116" name="form-nonce">

    <link crossorigin="anonymous" href="./dht11_files/github-e22d623d751b610e17d11f367d278f39da959fc110f2fce97536b485292df111.css" integrity="sha256-4i1iPXUbYQ4X0R82fSePOdqVn8EQ8vzpdTa0hSkt8RE=" media="all" rel="stylesheet">
    <link crossorigin="anonymous" href="./dht11_files/github2-0298d706e49675108065a45878d9c9b6f3846f747532a428027494383fe7c16b.css" integrity="sha256-ApjXBuSWdRCAZaRYeNnJtvOEb3R1MqQoAnSUOD/nwWs=" media="all" rel="stylesheet">
    
    
    


    <meta http-equiv="x-pjax-version" content="cd3c6f10feedef6a4993bbb0cd121730">

      
  <meta name="description" content="Arduino - libs and code">
  <meta name="go-import" content="github.com/RobTillaart/Arduino git https://github.com/RobTillaart/Arduino.git">

  <meta content="462844" name="octolytics-dimension-user_id"><meta content="RobTillaart" name="octolytics-dimension-user_login"><meta content="2544179" name="octolytics-dimension-repository_id"><meta content="RobTillaart/Arduino" name="octolytics-dimension-repository_nwo"><meta content="true" name="octolytics-dimension-repository_public"><meta content="false" name="octolytics-dimension-repository_is_fork"><meta content="2544179" name="octolytics-dimension-repository_network_root_id"><meta content="RobTillaart/Arduino" name="octolytics-dimension-repository_network_root_nwo">
  <link href="https://github.com/RobTillaart/Arduino/commits/master.atom" rel="alternate" title="Recent Commits to Arduino:master" type="application/atom+xml">

  <meta name="selected-link" value="repo_source" data-pjax-transient="true"><meta content="Rails, view, files#disambiguate" data-pjax-transient="true" name="analytics-event"><meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/files/disambiguate" data-pjax-transient="true" name="analytics-location"><link href="https://github.com/RobTillaart/Arduino/commits/master.atom" rel="alternate" title="Recent Commits to Arduino:master" type="application/atom+xml" data-pjax-transient="true"></head>


  <body class="logged_out   env-production windows vis-public">
    <a href="https://github.com/RobTillaart/Arduino/tree/master/libraries/DHTlib#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>

    
    
    



      
      <div class="header header-logged-out" role="banner">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/" data-ga-click="(Logged out) Header, go to homepage, icon:logo-wordmark">
      <span class="mega-octicon octicon-logo-github"></span>
    </a>

    <div class="header-actions" role="navigation">
        <a class="btn btn-primary" href="https://github.com/join" data-ga-click="(Logged out) Header, clicked Sign up, text:sign-up">Sign up</a>
      <a class="btn" href="https://github.com/login?return_to=%2FRobTillaart%2FArduino%2Ftree%2Fmaster%2Flibraries%2FDHTlib" data-ga-click="(Logged out) Header, clicked Sign in, text:sign-in">Sign in</a>
    </div>

    <div class="site-search repo-scope js-site-search" role="search">
      <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="https://github.com/RobTillaart/Arduino/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/RobTillaart/Arduino/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="✓"></div>
  <label class="js-chromeless-input-container form-control">
    <div class="scope-badge">This repository</div>
    <input type="text" class="js-site-search-focus js-site-search-field is-clearable chromeless-input" data-hotkey="s" name="q" placeholder="Search" aria-label="Search this repository" data-global-scope-placeholder="Search GitHub" data-repo-scope-placeholder="Search" tabindex="1" autocapitalize="off">
  </label>
</form>
    </div>

      <ul class="header-nav left" role="navigation">
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://github.com/explore" data-ga-click="(Logged out) Header, go to explore, text:explore">Explore</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://github.com/features" data-ga-click="(Logged out) Header, go to features, text:features">Features</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://enterprise.github.com/" data-ga-click="(Logged out) Header, go to enterprise, text:enterprise">Enterprise</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://github.com/pricing" data-ga-click="(Logged out) Header, go to pricing, text:pricing">Pricing</a>
          </li>
      </ul>

  </div>
</div>



    <div id="start-of-content" class="accessibility-aid"></div>

      <div id="js-flash-container">
</div>


    <div role="main" class="main-content">
        <div itemscope="" itemtype="http://schema.org/WebPage">
    <div id="js-repo-pjax-container" class="context-loader-container js-repo-nav-next" data-pjax-container="">  
<div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
  <div class="container repohead-details-container">

    

<ul class="pagehead-actions">

  <li>
      <a href="https://github.com/login?return_to=%2FRobTillaart%2FArduino" class="btn btn-sm btn-with-count tooltipped tooltipped-n" aria-label="You must be signed in to watch a repository" rel="nofollow">
    <span class="octicon octicon-eye"></span>
    Watch
  </a>
  <a class="social-count" href="https://github.com/RobTillaart/Arduino/watchers">
    155
  </a>

  </li>

  <li>
      <a href="https://github.com/login?return_to=%2FRobTillaart%2FArduino" class="btn btn-sm btn-with-count tooltipped tooltipped-n" aria-label="You must be signed in to star a repository" rel="nofollow">
    <span class="octicon octicon-star"></span>
    Star
  </a>

    <a class="social-count js-social-count" href="https://github.com/RobTillaart/Arduino/stargazers">
      356
    </a>

  </li>

  <li>
      <a href="https://github.com/login?return_to=%2FRobTillaart%2FArduino" class="btn btn-sm btn-with-count tooltipped tooltipped-n" aria-label="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-repo-forked"></span>
        Fork
      </a>

    <a href="https://github.com/RobTillaart/Arduino/network" class="social-count">
      955
    </a>
  </li>
</ul>

    <h1 itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public ">
  <span class="octicon octicon-repo"></span>
  <span class="author"><a href="https://github.com/RobTillaart" class="url fn" itemprop="url" rel="author"><span itemprop="title">RobTillaart</span></a></span><!--
--><span class="path-divider">/</span><!--
--><strong><a href="https://github.com/RobTillaart/Arduino" data-pjax="#js-repo-pjax-container">Arduino</a></strong>

  <span class="page-context-loader">
    <img alt="" height="16" src="./dht11_files/octocat-spinner-32.gif" width="16">
  </span>

</h1>

  </div>
  <div class="container">
    
<nav class="reponav js-repo-nav js-sidenav-container-pjax js-octicon-loaders" role="navigation" data-pjax="#js-repo-pjax-container">

  <a href="https://github.com/RobTillaart/Arduino" aria-label="Code" aria-selected="true" class="js-selected-navigation-item reponav-item selected" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /RobTillaart/Arduino">
    <span class="octicon octicon-code"></span>
    Code
</a>
    <a href="https://github.com/RobTillaart/Arduino/issues" class="js-selected-navigation-item reponav-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /RobTillaart/Arduino/issues">
      <span class="octicon octicon-issue-opened"></span>
      Issues
      <span class="counter">2</span>
</a>
  <a href="https://github.com/RobTillaart/Arduino/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /RobTillaart/Arduino/pulls">
    <span class="octicon octicon-git-pull-request"></span>
    Pull requests
    <span class="counter">1</span>
</a>

  <a href="https://github.com/RobTillaart/Arduino/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="pulse /RobTillaart/Arduino/pulse">
    <span class="octicon octicon-pulse"></span>
    Pulse
</a>
  <a href="https://github.com/RobTillaart/Arduino/graphs" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors /RobTillaart/Arduino/graphs">
    <span class="octicon octicon-graph"></span>
    Graphs
</a>

</nav>

  </div>
</div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    
<div class="file-navigation file-navigation-new">
  
<div class="select-menu js-menu-container js-select-menu left">
  <button class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w" title="master" type="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <i>Branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax="" aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="https://github.com/RobTillaart/Arduino/tree/master/libraries/DHTlib#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="https://github.com/RobTillaart/Arduino/tree/master/libraries/DHTlib#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open selected" href="./dht11_files/dht11.cpp" data-name="master" data-skip-pjax="true" rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="master">
                master
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="btn-group right">
    
  <button class="btn btn-sm disabled tooltipped tooltipped-n" aria-label="You must be signed in to make or propose changes" type="button">
    New file
  </button>

    <a href="https://github.com/RobTillaart/Arduino/find/master" data-pjax="" data-hotkey="t" class="js-show-file-finder btn btn-sm empty-icon">
      Find file
    </a>
    <a href="https://github.com/RobTillaart/Arduino/commits/master/libraries/DHTlib" class="btn btn-sm empty-icon tooltipped tooltipped-nw" aria-label="Browse commits for this branch">
      History
    </a>
  </div>
  <div class="breadcrumb"><span class="repo-root js-repo-root"><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="https://github.com/RobTillaart/Arduino" class="" data-branch="master" data-pjax="true" itemscope="url"><span itemprop="title">Arduino</span></a></span></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="https://github.com/RobTillaart/Arduino/tree/master/libraries" class="" data-branch="master" data-pjax="true" itemscope="url"><span itemprop="title">libraries</span></a></span><span class="separator">/</span><strong class="final-path">DHTlib</strong><span class="separator">/</span></div>
</div>




  <div class="commit-tease js-details-container">
    <span class="right">
      Latest commit
      <a class="commit-tease-sha" href="https://github.com/RobTillaart/Arduino/commit/fad0391f621a7de4e7c1d836b1af6eea6f078c25" data-pjax="">
        fad0391
      </a>
      <time datetime="2015-11-14T20:50:01Z" is="relative-time" title="14 nov. 2015 21:50 UTC+1">24 days ago</time>
    </span>


    <span class="commit-author-section">
      <img alt="@Harry93x" class="avatar" height="20" src="./dht11_files/9108000" width="20">
      <a href="https://github.com/Harry93x" class="user-mention" rel="contributor">Harry93x</a>
    </span>

        <a href="https://github.com/RobTillaart/Arduino/commit/fad0391f621a7de4e7c1d836b1af6eea6f078c25" class="message" data-pjax="true" title="Add timing analysis, format output, limit execution cycles

To increase the usefulness of the example, I added the measurement of
the complete cycle, which is the important figure. The reading time
itself, though interesting, is not the limiting factor according to the
datasheet.
Additionally, I updated the printing instructions to create a nicely
formatted output and limited the number cycles necessary to reach &quot;del
== 0&quot;.">Add timing analysis, format output, limit execution cycles</a>
          <span class="hidden-text-expander inline">
            <a href="https://github.com/RobTillaart/Arduino/tree/master/libraries/DHTlib#" class="js-details-target">…</a>
          </span>
    

      <div class="commit-desc"><pre class="text-small">To increase the usefulness of the example, I added the measurement of
the complete cycle, which is the important figure. The reading time
itself, though interesting, is not the limiting factor according to the
datasheet.
Additionally, I updated the printing instructions to create a nicely
formatted output and limited the number cycles necessary to reach "del
== 0".</pre></div>
  </div>


<div class="file-wrap">
  <a href="https://github.com/RobTillaart/Arduino/tree/8ff93f5c5a6df27127846aa747d3798c248e6e93/libraries/DHTlib" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

  <table class="files js-navigation-container js-active-navigation-container" data-pjax="">
      <tbody><tr class="up-tree js-navigation-item">
        <td></td>
        <td><a href="https://github.com/RobTillaart/Arduino/tree/master/libraries" class="js-navigation-open" rel="nofollow" title="Go to parent directory">..</a></td>
        <td></td>
        <td></td>
      </tr>


    </tbody><tbody>
      <tr class="warning include-fragment-error">
        <td class="icon"><span class="octicon octicon-alert"></span></td>
        <td class="content" colspan="3">Failed to load latest commit information.</td>
      </tr>

        <tr class="js-navigation-item">
          <td class="icon">
            <span class="octicon octicon-file-directory"></span>
            <img alt="" class="spinner" height="16" src="./dht11_files/octocat-spinner-32.gif" width="16">
          </td>
          <td class="content">
            <span class="css-truncate css-truncate-target"><a href="https://github.com/RobTillaart/Arduino/tree/master/libraries/DHTlib/examples" class="js-directory-link js-navigation-open" id="bfebe34154a0dfd9fc7b447fc9ed74e9-e78810359333dfad7ec9f5c2e5512f709f185659" title="examples">examples</a></span>
          </td>
          <td class="message">
            <span class="css-truncate css-truncate-target">
                  <a href="https://github.com/RobTillaart/Arduino/commit/fad0391f621a7de4e7c1d836b1af6eea6f078c25" class="message" data-pjax="true" title="Add timing analysis, format output, limit execution cycles

To increase the usefulness of the example, I added the measurement of
the complete cycle, which is the important figure. The reading time
itself, though interesting, is not the limiting factor according to the
datasheet.
Additionally, I updated the printing instructions to create a nicely
formatted output and limited the number cycles necessary to reach &quot;del
== 0&quot;.">Add timing analysis, format output, limit execution cycles</a>
            </span>
          </td>
          <td class="age">
            <span class="css-truncate css-truncate-target"><time datetime="2015-11-14T20:50:01Z" is="time-ago" title="14 nov. 2015 21:50 UTC+1">24 days ago</time></span>
          </td>
        </tr>
        <tr class="js-navigation-item">
          <td class="icon">
            <span class="octicon octicon-file-text"></span>
            <img alt="" class="spinner" height="16" src="./dht11_files/octocat-spinner-32.gif" width="16">
          </td>
          <td class="content">
            <span class="css-truncate css-truncate-target"><a href="https://github.com/RobTillaart/Arduino/blob/master/libraries/DHTlib/dht.cpp" class="js-directory-link js-navigation-open" id="1faa59d614e954d28f30a6839cda4dae-f1f722138cd1f574ca3824bacfd7703f9fe74efd" title="dht.cpp">dht.cpp</a></span>
          </td>
          <td class="message">
            <span class="css-truncate css-truncate-target">
                  <a href="https://github.com/RobTillaart/Arduino/commit/e475755fe011f8180a20c2294ac068b05ad72035" class="message" data-pjax="true" title="fix delayMicroseconds">fix delayMicroseconds</a>
            </span>
          </td>
          <td class="age">
            <span class="css-truncate css-truncate-target"><time datetime="2015-10-12T18:48:53Z" is="time-ago" title="12 oct. 2015 20:48 UTC+2">2 months ago</time></span>
          </td>
        </tr>
        <tr class="js-navigation-item">
          <td class="icon">
            <span class="octicon octicon-file-text"></span>
            <img alt="" class="spinner" height="16" src="./dht11_files/octocat-spinner-32.gif" width="16">
          </td>
          <td class="content">
            <span class="css-truncate css-truncate-target"><a href="https://github.com/RobTillaart/Arduino/blob/master/libraries/DHTlib/dht.h" class="js-directory-link js-navigation-open" id="4df05bcb356f5a03d58663e4a462596e-461c0da40c6b674701032ef44b60549803a48098" title="dht.h">dht.h</a></span>
          </td>
          <td class="message">
            <span class="css-truncate css-truncate-target">
                  <a href="https://github.com/RobTillaart/Arduino/commit/a48ea1ea297a10536fec616c169985a844671580" class="message" data-pjax="true" title="+ version 0.1.21
+ replaced delay by delayMicroseconds()
+ removed dependency on F_CPU
+ added constructor
+ refactor">+ version 0.1.21</a>
            </span>
          </td>
          <td class="age">
            <span class="css-truncate css-truncate-target"><time datetime="2015-10-12T18:43:24Z" is="time-ago" title="12 oct. 2015 20:43 UTC+2">2 months ago</time></span>
          </td>
        </tr>
        <tr class="js-navigation-item navigation-focus">
          <td class="icon">
            <span class="octicon octicon-file-text"></span>
            <img alt="" class="spinner" height="16" src="./dht11_files/octocat-spinner-32.gif" width="16">
          </td>
          <td class="content">
            <span class="css-truncate css-truncate-target"><a href="https://github.com/RobTillaart/Arduino/blob/master/libraries/DHTlib/readme.txt" class="js-directory-link js-navigation-open" id="eb6b6c90251ab33cee784713c451e6d8-0a842692c2f3de4b03abb19df29dbed76ea1c43d" title="readme.txt">readme.txt</a></span>
          </td>
          <td class="message">
            <span class="css-truncate css-truncate-target">
                  <a href="https://github.com/RobTillaart/Arduino/commit/a48ea1ea297a10536fec616c169985a844671580" class="message" data-pjax="true" title="+ version 0.1.21
+ replaced delay by delayMicroseconds()
+ removed dependency on F_CPU
+ added constructor
+ refactor">+ version 0.1.21</a>
            </span>
          </td>
          <td class="age">
            <span class="css-truncate css-truncate-target"><time datetime="2015-10-12T18:43:24Z" is="time-ago" title="12 oct. 2015 20:43 UTC+2">2 months ago</time></span>
          </td>
        </tr>
    </tbody>
  </table>

</div>


  <div id="readme" class="boxed-group flush clearfix announce instapaper_body txt">
    <h3>
      <span class="octicon octicon-book"></span>
      readme.txt
    </h3>

    <div class="plain"><pre>The DHT11, 21, 22, 33 and 44 are relative inexpensive sensors for measuring temperature and humidity.

This library can be used for reading both values from these DHT sensors.
The DHT11 only returns integers (e.g. 20) and does not support negative values.
The others are quite similar and provide one decimal digit (e.g. 20.2)
The hardware pins of the sensors and handshake are identical so ideal to combine in one lib.

The library (0.1.13 version) is confirmed to work on:

UNO (tested myself)
2009 (tested myself)
MEGA2560
DUE
attiny85 @8MHz
Digistump Digix @ 84 MHz

More information - <a href="http://playground.arduino.cc//Main/DHTLib">http://playground.arduino.cc//Main/DHTLib</a> -

Notes:
version 0.1.13 is the last stable version for both AVR and ARM

version 0.1.14 and up are not compatible anymore with pre 1.0 Arduino
version 0.1.14 and up have breaking changes wrt ARM based arduino's e.g DUE.
version 0.1.15 is stable version for AVR only
version 0.1.16 and 0.1.17 have breaking changes for DHT11
version 0.1.18 works again for DHT11 (avr only)
version 0.1.19 fixed masking bug DHT11 (avr only)
version 0.1.20 Reduce footprint (34 bytes) by using int8_t as error codes. (thanks to chaveiro)
version 0.1.21 replace delay with delayMicroseconds() + small fix (thanks to codingforfun)
</pre></div>
  </div>


  </div>
  <div class="modal-backdrop"></div>
</div>




</div>
  </div>

    </div>

        <div class="container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
      <li><a href="https://developer.github.com/" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com/" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com/" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>
        <li><a href="https://github.com/pricing" data-ga-click="Footer, go to pricing, text:pricing">Pricing</a></li>

    </ul>

    <a href="https://github.com/" aria-label="Homepage">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
</a>
    <ul class="site-footer-links">
      <li>© 2015 <span title="0.05377s from github-fe128-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact</a></li>
        <li><a href="https://help.github.com/" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>
  </div>
</div>



    
    
    

    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
        <span class="octicon octicon-x"></span>
      </button>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" integrity="sha256-t8lSPZPmzQI1oKi30aaR95CdODTNnJyqexZ0ulCLZEw=" src="./dht11_files/frameworks-b7c9523d93e6cd0235a0a8b7d1a691f7909d3834cd9c9caa7b1674ba508b644c.js"></script>
      <script async="async" crossorigin="anonymous" integrity="sha256-tCQwwSHpY8c3CpnQKcePPC/cm3W3Ot+BfweALjOYjoE=" src="./dht11_files/github-b42430c121e963c7370a99d029c78f3c2fdc9b75b73adf817f07802e33988e81.js"></script>
      
      
      
    <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner hidden">
      <span class="octicon octicon-alert"></span>
      <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
      <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
    </div>
  


    <div class="facebox" id="facebox" style="display:none;">       <div class="facebox-popup">         <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">         </div>         <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">           <span class="octicon octicon-remove-close"></span>         </button>       </div>     </div></body></html>