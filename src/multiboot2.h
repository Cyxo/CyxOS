<!DOCTYPE html>
<HTML LANG="en">
<HEAD>
<META http-equiv="content-type" content="text/html; charset=utf-8">
<META name="viewport" content="width=device-width, initial-scale=0.8">
<META name="robots" content="nofollow">
<LINK rel="stylesheet" type="text/css" href="/style/fresh.css" />
<link rel="stylesheet" type="text/css" href="/fresh/hl_fold.css" />
<link rel="stylesheet" type="text/css" href="/fresh/standard.css" />
<TITLE>GRUB&nbsp;2: include/multiboot2.h | Fossies</TITLE>
<META http-equiv="Content-Script-Type" content="text/javascript">
<script type="text/javascript" src="/scripts/highlight_styles.js"></script>
</HEAD>
<BODY>
<script type="text/javascript" src="/scripts/wz_tooltip.js"></script>
<script type="text/javascript" src="/scripts/tip_balloon.js"></script>
<H2><IMG SRC="/warix/forest1.gif" WIDTH="45" HEIGHT="29" ALT=""> "<A HREF="/">Fossies</A>" - the Fresh Open Source Software Archive <IMG SRC="/warix/forest2.gif" WIDTH="48" HEIGHT="30" ALT=""></H2>
<H3>Member "grub-2.04/include/multiboot2.h" (24 Nov 2018, 10697 Bytes) of package <A HREF="/" TITLE="Fossies homepage">/</A><A HREF="/linux/" TITLE="Listing of all main folders within the Fossies basic folder /linux/">linux</A>/<A HREF="/linux/misc/" TITLE="Listing of all packages within the Fossies folder /linux/misc/">misc</A>/<A HREF="/linux/misc/grub-2.04.tar.xz/" TITLE="Contents listing, member browsing, download with different compression formats, Doxygen generated source code documentation &amp; more ...">grub-2.04.tar.xz</A>:</H3>
<HR>
<DIV class="fresh_info">
As a special service "Fossies" has tried to format the requested source page into HTML format using (guessed) C and C++ source code syntax highlighting (style: <A HREF="/select_hl_style_lang" style="text-decoration:underline;" onmouseover="Tip(hl_styles, ABOVE, false, OFFSETX, 0, OFFSETY, 5, BALLOON, true, FOLLOWMOUSE, false, WIDTH, 730, DELAY, 0, FADEIN, 0, FADEOUT, 1000, DURATION, 20000, STICKY, 1, CLICKCLOSE, true)" onmouseout="UnTip()" TITLE="About highlight style types">standard</A>) with prefixed line numbers and <A HREF="/features.html#members_hl">code folding</A> option.
Alternatively you can here <A HREF="/linux/misc/grub-2.04.tar.xz/grub-2.04/include/multiboot2.h?m=t">view</A> or <A HREF="/linux/misc/grub-2.04.tar.xz/grub-2.04/include/multiboot2.h?m=b" onmouseover="Tip(hl_dl_tip, ABOVE, false, OFFSETX, 0, OFFSETY, -5, BALLOON, true, FOLLOWMOUSE, false, WIDTH, 400, DELAY, 0, FADEIN, 0, FADEOUT, 300, DURATION, 10000, STICKY, 1, CLICKCLOSE, true)" onmouseout="UnTip()" TITLE="By the way: A member file download can also be achieved by clicking within a package contents listing on the according byte size field">download</A> the uninterpreted source code file.
 For more information about "multiboot2.h" see the <span class="fresh_info_amo"><A HREF="/dox/" TITLE="Fossies doxygen-generated source code documentation (main page)" REL="nofollow">Fossies "Dox"</A></span> <a href="/dox/grub-2.04/multiboot2_8h.html" TITLE="&quot;multiboot2.h&quot;: Doxygen-generated file reference page with documentation of  data structures, macros and typedefs.">file reference</a> documentation and the latest <span class="fresh_info_amo"><A HREF="/diffs/" TITLE="Fossies source code differences reports (main page)" REL="nofollow">Fossies "Diffs"</A></span> side-by-side code changes report: <A HREF="/diffs/grub/2.02_vs_2.04/include/multiboot2.h-diff.html" TITLE="&quot;multiboot2.h&quot; file has changes in the current release!" STYLE="white-space: nowrap;"><IMG SRC="/delta_answer_10.png" WIDTH="13" HEIGHT="13"> 2.02_vs_2.04</A>.
</DIV>
<HR>
<script type="text/javascript" src="/scripts/highlight_cf_h.js">
</script>
<pre class="hl"><span id="l_1" class="hl fld"><span class="hl lin">    1 </span><span class="hl com">/*  multiboot2.h - Multiboot 2 header file.  */</span></span>
<span id="l_2" class="hl fld"><span class="hl lin">    2 </span><span class="hl com">/*  Copyright (C) 1999,2003,2007,2008,2009,2010  Free Software Foundation, Inc.</span></span>
<span id="l_3" class="hl fld"><span class="hl lin">    3 </span><span class="hl com"> *</span></span>
<span id="l_4" class="hl fld"><span class="hl lin">    4 </span><span class="hl com"> *  Permission is hereby granted, free of charge, to any person obtaining a copy</span></span>
<span id="l_5" class="hl fld"><span class="hl lin">    5 </span><span class="hl com"> *  of this software and associated documentation files (the &quot;Software&quot;), to</span></span>
<span id="l_6" class="hl fld"><span class="hl lin">    6 </span><span class="hl com"> *  deal in the Software without restriction, including without limitation the</span></span>
<span id="l_7" class="hl fld"><span class="hl lin">    7 </span><span class="hl com"> *  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or</span></span>
<span id="l_8" class="hl fld"><span class="hl lin">    8 </span><span class="hl com"> *  sell copies of the Software, and to permit persons to whom the Software is</span></span>
<span id="l_9" class="hl fld"><span class="hl lin">    9 </span><span class="hl com"> *  furnished to do so, subject to the following conditions:</span></span>
<span id="l_10" class="hl fld"><span class="hl lin">   10 </span><span class="hl com"> *</span></span>
<span id="l_11" class="hl fld"><span class="hl lin">   11 </span><span class="hl com"> *  The above copyright notice and this permission notice shall be included in</span></span>
<span id="l_12" class="hl fld"><span class="hl lin">   12 </span><span class="hl com"> *  all copies or substantial portions of the Software.</span></span>
<span id="l_13" class="hl fld"><span class="hl lin">   13 </span><span class="hl com"> *</span></span>
<span id="l_14" class="hl fld"><span class="hl lin">   14 </span><span class="hl com"> *  THE SOFTWARE IS PROVIDED &quot;AS IS&quot;, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR</span></span>
<span id="l_15" class="hl fld"><span class="hl lin">   15 </span><span class="hl com"> *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,</span></span>
<span id="l_16" class="hl fld"><span class="hl lin">   16 </span><span class="hl com"> *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL ANY</span></span>
<span id="l_17" class="hl fld"><span class="hl lin">   17 </span><span class="hl com"> *  DEVELOPER OR DISTRIBUTOR BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,</span></span>
<span id="l_18" class="hl fld"><span class="hl lin">   18 </span><span class="hl com"> *  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR</span></span>
<span id="l_19" class="hl fld"><span class="hl lin">   19 </span><span class="hl com"> *  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.</span></span>
<span id="l_20" class="hl fld"><span class="hl lin">   20 </span><span class="hl com"> */</span></span>
<span id="l_21" class="hl fld"><span class="hl lin">   21 </span></span>
<span id="l_22" class="hl fld"><span class="hl lin">   22 </span><span class="hl ppc">#ifndef MULTIBOOT_HEADER</span></span>
<span id="l_23" class="hl fld"><span class="hl lin">   23 </span><span class="hl ppc">#define MULTIBOOT_HEADER 1</span></span>
<span id="l_24" class="hl fld"><span class="hl lin">   24 </span></span>
<span id="l_25" class="hl fld"><span class="hl lin">   25 </span><span class="hl com">/* How many bytes from the start of the file we search for the header.  */</span></span>
<span id="l_26" class="hl fld"><span class="hl lin">   26 </span><span class="hl ppc">#define MULTIBOOT_SEARCH            32768</span></span>
<span id="l_27" class="hl fld"><span class="hl lin">   27 </span><span class="hl ppc">#define MULTIBOOT_HEADER_ALIGN          8</span></span>
<span id="l_28" class="hl fld"><span class="hl lin">   28 </span></span>
<span id="l_29" class="hl fld"><span class="hl lin">   29 </span><span class="hl com">/* The magic field should contain this.  */</span></span>
<span id="l_30" class="hl fld"><span class="hl lin">   30 </span><span class="hl ppc">#define MULTIBOOT2_HEADER_MAGIC         0xe85250d6</span></span>
<span id="l_31" class="hl fld"><span class="hl lin">   31 </span></span>
<span id="l_32" class="hl fld"><span class="hl lin">   32 </span><span class="hl com">/* This should be in %eax.  */</span></span>
<span id="l_33" class="hl fld"><span class="hl lin">   33 </span><span class="hl ppc">#define MULTIBOOT2_BOOTLOADER_MAGIC     0x36d76289</span></span>
<span id="l_34" class="hl fld"><span class="hl lin">   34 </span></span>
<span id="l_35" class="hl fld"><span class="hl lin">   35 </span><span class="hl com">/* Alignment of multiboot modules.  */</span></span>
<span id="l_36" class="hl fld"><span class="hl lin">   36 </span><span class="hl ppc">#define MULTIBOOT_MOD_ALIGN         0x00001000</span></span>
<span id="l_37" class="hl fld"><span class="hl lin">   37 </span></span>
<span id="l_38" class="hl fld"><span class="hl lin">   38 </span><span class="hl com">/* Alignment of the multiboot info structure.  */</span></span>
<span id="l_39" class="hl fld"><span class="hl lin">   39 </span><span class="hl ppc">#define MULTIBOOT_INFO_ALIGN            0x00000008</span></span>
<span id="l_40" class="hl fld"><span class="hl lin">   40 </span></span>
<span id="l_41" class="hl fld"><span class="hl lin">   41 </span><span class="hl com">/* Flags set in the &#39;flags&#39; member of the multiboot header.  */</span></span>
<span id="l_42" class="hl fld"><span class="hl lin">   42 </span></span>
<span id="l_43" class="hl fld"><span class="hl lin">   43 </span><span class="hl ppc">#define MULTIBOOT_TAG_ALIGN                  8</span></span>
<span id="l_44" class="hl fld"><span class="hl lin">   44 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_END               0</span></span>
<span id="l_45" class="hl fld"><span class="hl lin">   45 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_CMDLINE           1</span></span>
<span id="l_46" class="hl fld"><span class="hl lin">   46 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_BOOT_LOADER_NAME  2</span></span>
<span id="l_47" class="hl fld"><span class="hl lin">   47 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_MODULE            3</span></span>
<span id="l_48" class="hl fld"><span class="hl lin">   48 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_BASIC_MEMINFO     4</span></span>
<span id="l_49" class="hl fld"><span class="hl lin">   49 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_BOOTDEV           5</span></span>
<span id="l_50" class="hl fld"><span class="hl lin">   50 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_MMAP              6</span></span>
<span id="l_51" class="hl fld"><span class="hl lin">   51 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_VBE               7</span></span>
<span id="l_52" class="hl fld"><span class="hl lin">   52 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_FRAMEBUFFER       8</span></span>
<span id="l_53" class="hl fld"><span class="hl lin">   53 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_ELF_SECTIONS      9</span></span>
<span id="l_54" class="hl fld"><span class="hl lin">   54 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_APM               10</span></span>
<span id="l_55" class="hl fld"><span class="hl lin">   55 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_EFI32             11</span></span>
<span id="l_56" class="hl fld"><span class="hl lin">   56 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_EFI64             12</span></span>
<span id="l_57" class="hl fld"><span class="hl lin">   57 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_SMBIOS            13</span></span>
<span id="l_58" class="hl fld"><span class="hl lin">   58 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_ACPI_OLD          14</span></span>
<span id="l_59" class="hl fld"><span class="hl lin">   59 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_ACPI_NEW          15</span></span>
<span id="l_60" class="hl fld"><span class="hl lin">   60 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_NETWORK           16</span></span>
<span id="l_61" class="hl fld"><span class="hl lin">   61 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_EFI_MMAP          17</span></span>
<span id="l_62" class="hl fld"><span class="hl lin">   62 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_EFI_BS            18</span></span>
<span id="l_63" class="hl fld"><span class="hl lin">   63 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_EFI32_IH          19</span></span>
<span id="l_64" class="hl fld"><span class="hl lin">   64 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_EFI64_IH          20</span></span>
<span id="l_65" class="hl fld"><span class="hl lin">   65 </span><span class="hl ppc">#define MULTIBOOT_TAG_TYPE_LOAD_BASE_ADDR    21</span></span>
<span id="l_66" class="hl fld"><span class="hl lin">   66 </span></span>
<span id="l_67" class="hl fld"><span class="hl lin">   67 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_END  0</span></span>
<span id="l_68" class="hl fld"><span class="hl lin">   68 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_INFORMATION_REQUEST  1</span></span>
<span id="l_69" class="hl fld"><span class="hl lin">   69 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_ADDRESS  2</span></span>
<span id="l_70" class="hl fld"><span class="hl lin">   70 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_ENTRY_ADDRESS  3</span></span>
<span id="l_71" class="hl fld"><span class="hl lin">   71 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_CONSOLE_FLAGS  4</span></span>
<span id="l_72" class="hl fld"><span class="hl lin">   72 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_FRAMEBUFFER  5</span></span>
<span id="l_73" class="hl fld"><span class="hl lin">   73 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_MODULE_ALIGN  6</span></span>
<span id="l_74" class="hl fld"><span class="hl lin">   74 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_EFI_BS  7</span></span>
<span id="l_75" class="hl fld"><span class="hl lin">   75 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_ENTRY_ADDRESS_EFI64  9</span></span>
<span id="l_76" class="hl fld"><span class="hl lin">   76 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_RELOCATABLE  10</span></span>
<span id="l_77" class="hl fld"><span class="hl lin">   77 </span></span>
<span id="l_78" class="hl fld"><span class="hl lin">   78 </span><span class="hl ppc">#define MULTIBOOT2_ARCHITECTURE_I386  0</span></span>
<span id="l_79" class="hl fld"><span class="hl lin">   79 </span><span class="hl ppc">#define MULTIBOOT2_ARCHITECTURE_MIPS32  4</span></span>
<span id="l_80" class="hl fld"><span class="hl lin">   80 </span><span class="hl ppc">#define MULTIBOOT_HEADER_TAG_OPTIONAL 1</span></span>
<span id="l_81" class="hl fld"><span class="hl lin">   81 </span></span>
<span id="l_82" class="hl fld"><span class="hl lin">   82 </span><span class="hl ppc">#define MULTIBOOT_LOAD_PREFERENCE_NONE 0</span></span>
<span id="l_83" class="hl fld"><span class="hl lin">   83 </span><span class="hl ppc">#define MULTIBOOT_LOAD_PREFERENCE_LOW 1</span></span>
<span id="l_84" class="hl fld"><span class="hl lin">   84 </span><span class="hl ppc">#define MULTIBOOT_LOAD_PREFERENCE_HIGH 2</span></span>
<span id="l_85" class="hl fld"><span class="hl lin">   85 </span></span>
<span id="l_86" class="hl fld"><span class="hl lin">   86 </span><span class="hl ppc">#define MULTIBOOT_CONSOLE_FLAGS_CONSOLE_REQUIRED 1</span></span>
<span id="l_87" class="hl fld"><span class="hl lin">   87 </span><span class="hl ppc">#define MULTIBOOT_CONSOLE_FLAGS_EGA_TEXT_SUPPORTED 2</span></span>
<span id="l_88" class="hl fld"><span class="hl lin">   88 </span></span>
<span id="l_89" class="hl fld"><span class="hl lin">   89 </span><span class="hl ppc">#ifndef ASM_FILE</span></span>
<span id="l_90" class="hl fld"><span class="hl lin">   90 </span></span>
<span id="l_91" class="hl fld"><span class="hl lin">   91 </span><span class="hl kwc">typedef</span> <span class="hl kwb">unsigned char</span>       multiboot_uint8_t<span class="hl opt">;</span></span>
<span id="l_92" class="hl fld"><span class="hl lin">   92 </span><span class="hl kwc">typedef</span> <span class="hl kwb">unsigned short</span>      multiboot_uint16_t<span class="hl opt">;</span></span>
<span id="l_93" class="hl fld"><span class="hl lin">   93 </span><span class="hl kwc">typedef</span> <span class="hl kwb">unsigned int</span>        multiboot_uint32_t<span class="hl opt">;</span></span>
<span id="l_94" class="hl fld"><span class="hl lin">   94 </span><span class="hl kwc">typedef</span> <span class="hl kwb">unsigned long long</span>  multiboot_uint64_t<span class="hl opt">;</span></span>
<span id="l_95" class="hl fld"><span class="hl lin">   95 </span></span>
<span id="l_96" class="hl fld"><span class="hl lin">   96 </span><span class="hl kwb">struct</span> multiboot_header</span>
<span id="l_97" class="hl fld"><span class="hl lin">   97 </span><span class="hl opt"><script>hlOpen(97,1);</script>{</span></span>
<span id="l_98" class="hl fld"><span class="hl lin">   98 </span>  <span class="hl com">/* Must be MULTIBOOT_MAGIC - see above.  */</span></span>
<span id="l_99" class="hl fld"><span class="hl lin">   99 </span>  multiboot_uint32_t magic<span class="hl opt">;</span></span>
<span id="l_100" class="hl fld"><span class="hl lin">  100 </span></span>
<span id="l_101" class="hl fld"><span class="hl lin">  101 </span>  <span class="hl com">/* ISA */</span></span>
<span id="l_102" class="hl fld"><span class="hl lin">  102 </span>  multiboot_uint32_t architecture<span class="hl opt">;</span></span>
<span id="l_103" class="hl fld"><span class="hl lin">  103 </span></span>
<span id="l_104" class="hl fld"><span class="hl lin">  104 </span>  <span class="hl com">/* Total header length.  */</span></span>
<span id="l_105" class="hl fld"><span class="hl lin">  105 </span>  multiboot_uint32_t header_length<span class="hl opt">;</span></span>
<span id="l_106" class="hl fld"><span class="hl lin">  106 </span></span>
<span id="l_107" class="hl fld"><span class="hl lin">  107 </span>  <span class="hl com">/* The above fields plus this one must equal 0 mod 2^32. */</span></span>
<span id="l_108" class="hl fld"><span class="hl lin">  108 </span>  multiboot_uint32_t checksum<span class="hl opt">;</span></span>
<span id="l_109" class="hl fld"><span class="hl lin">  109 </span><span class="hl opt"><script>hlClose(1, 109);</script>};</span></span>
<span id="l_110" class="hl fld"><span class="hl lin">  110 </span></span>
<span id="l_111" class="hl fld"><span class="hl lin">  111 </span><span class="hl kwb">struct</span> multiboot_header_tag</span>
<span id="l_112" class="hl fld"><span class="hl lin">  112 </span><span class="hl opt"><script>hlOpen(112,1);</script>{</span></span>
<span id="l_113" class="hl fld"><span class="hl lin">  113 </span>  multiboot_uint16_t type<span class="hl opt">;</span></span>
<span id="l_114" class="hl fld"><span class="hl lin">  114 </span>  multiboot_uint16_t flags<span class="hl opt">;</span></span>
<span id="l_115" class="hl fld"><span class="hl lin">  115 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_116" class="hl fld"><span class="hl lin">  116 </span><span class="hl opt"><script>hlClose(2, 116);</script>};</span></span>
<span id="l_117" class="hl fld"><span class="hl lin">  117 </span></span>
<span id="l_118" class="hl fld"><span class="hl lin">  118 </span><span class="hl kwb">struct</span> multiboot_header_tag_information_request</span>
<span id="l_119" class="hl fld"><span class="hl lin">  119 </span><span class="hl opt"><script>hlOpen(119,1);</script>{</span></span>
<span id="l_120" class="hl fld"><span class="hl lin">  120 </span>  multiboot_uint16_t type<span class="hl opt">;</span></span>
<span id="l_121" class="hl fld"><span class="hl lin">  121 </span>  multiboot_uint16_t flags<span class="hl opt">;</span></span>
<span id="l_122" class="hl fld"><span class="hl lin">  122 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_123" class="hl fld"><span class="hl lin">  123 </span>  multiboot_uint32_t requests<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_124" class="hl fld"><span class="hl lin">  124 </span><span class="hl opt"><script>hlClose(3, 124);</script>};</span></span>
<span id="l_125" class="hl fld"><span class="hl lin">  125 </span></span>
<span id="l_126" class="hl fld"><span class="hl lin">  126 </span><span class="hl kwb">struct</span> multiboot_header_tag_address</span>
<span id="l_127" class="hl fld"><span class="hl lin">  127 </span><span class="hl opt"><script>hlOpen(127,1);</script>{</span></span>
<span id="l_128" class="hl fld"><span class="hl lin">  128 </span>  multiboot_uint16_t type<span class="hl opt">;</span></span>
<span id="l_129" class="hl fld"><span class="hl lin">  129 </span>  multiboot_uint16_t flags<span class="hl opt">;</span></span>
<span id="l_130" class="hl fld"><span class="hl lin">  130 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_131" class="hl fld"><span class="hl lin">  131 </span>  multiboot_uint32_t header_addr<span class="hl opt">;</span></span>
<span id="l_132" class="hl fld"><span class="hl lin">  132 </span>  multiboot_uint32_t load_addr<span class="hl opt">;</span></span>
<span id="l_133" class="hl fld"><span class="hl lin">  133 </span>  multiboot_uint32_t load_end_addr<span class="hl opt">;</span></span>
<span id="l_134" class="hl fld"><span class="hl lin">  134 </span>  multiboot_uint32_t bss_end_addr<span class="hl opt">;</span></span>
<span id="l_135" class="hl fld"><span class="hl lin">  135 </span><span class="hl opt"><script>hlClose(4, 135);</script>};</span></span>
<span id="l_136" class="hl fld"><span class="hl lin">  136 </span></span>
<span id="l_137" class="hl fld"><span class="hl lin">  137 </span><span class="hl kwb">struct</span> multiboot_header_tag_entry_address</span>
<span id="l_138" class="hl fld"><span class="hl lin">  138 </span><span class="hl opt"><script>hlOpen(138,1);</script>{</span></span>
<span id="l_139" class="hl fld"><span class="hl lin">  139 </span>  multiboot_uint16_t type<span class="hl opt">;</span></span>
<span id="l_140" class="hl fld"><span class="hl lin">  140 </span>  multiboot_uint16_t flags<span class="hl opt">;</span></span>
<span id="l_141" class="hl fld"><span class="hl lin">  141 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_142" class="hl fld"><span class="hl lin">  142 </span>  multiboot_uint32_t entry_addr<span class="hl opt">;</span></span>
<span id="l_143" class="hl fld"><span class="hl lin">  143 </span><span class="hl opt"><script>hlClose(5, 143);</script>};</span></span>
<span id="l_144" class="hl fld"><span class="hl lin">  144 </span></span>
<span id="l_145" class="hl fld"><span class="hl lin">  145 </span><span class="hl kwb">struct</span> multiboot_header_tag_console_flags</span>
<span id="l_146" class="hl fld"><span class="hl lin">  146 </span><span class="hl opt"><script>hlOpen(146,1);</script>{</span></span>
<span id="l_147" class="hl fld"><span class="hl lin">  147 </span>  multiboot_uint16_t type<span class="hl opt">;</span></span>
<span id="l_148" class="hl fld"><span class="hl lin">  148 </span>  multiboot_uint16_t flags<span class="hl opt">;</span></span>
<span id="l_149" class="hl fld"><span class="hl lin">  149 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_150" class="hl fld"><span class="hl lin">  150 </span>  multiboot_uint32_t console_flags<span class="hl opt">;</span></span>
<span id="l_151" class="hl fld"><span class="hl lin">  151 </span><span class="hl opt"><script>hlClose(6, 151);</script>};</span></span>
<span id="l_152" class="hl fld"><span class="hl lin">  152 </span></span>
<span id="l_153" class="hl fld"><span class="hl lin">  153 </span><span class="hl kwb">struct</span> multiboot_header_tag_framebuffer</span>
<span id="l_154" class="hl fld"><span class="hl lin">  154 </span><span class="hl opt"><script>hlOpen(154,1);</script>{</span></span>
<span id="l_155" class="hl fld"><span class="hl lin">  155 </span>  multiboot_uint16_t type<span class="hl opt">;</span></span>
<span id="l_156" class="hl fld"><span class="hl lin">  156 </span>  multiboot_uint16_t flags<span class="hl opt">;</span></span>
<span id="l_157" class="hl fld"><span class="hl lin">  157 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_158" class="hl fld"><span class="hl lin">  158 </span>  multiboot_uint32_t width<span class="hl opt">;</span></span>
<span id="l_159" class="hl fld"><span class="hl lin">  159 </span>  multiboot_uint32_t height<span class="hl opt">;</span></span>
<span id="l_160" class="hl fld"><span class="hl lin">  160 </span>  multiboot_uint32_t depth<span class="hl opt">;</span></span>
<span id="l_161" class="hl fld"><span class="hl lin">  161 </span><span class="hl opt"><script>hlClose(7, 161);</script>};</span></span>
<span id="l_162" class="hl fld"><span class="hl lin">  162 </span></span>
<span id="l_163" class="hl fld"><span class="hl lin">  163 </span><span class="hl kwb">struct</span> multiboot_header_tag_module_align</span>
<span id="l_164" class="hl fld"><span class="hl lin">  164 </span><span class="hl opt"><script>hlOpen(164,1);</script>{</span></span>
<span id="l_165" class="hl fld"><span class="hl lin">  165 </span>  multiboot_uint16_t type<span class="hl opt">;</span></span>
<span id="l_166" class="hl fld"><span class="hl lin">  166 </span>  multiboot_uint16_t flags<span class="hl opt">;</span></span>
<span id="l_167" class="hl fld"><span class="hl lin">  167 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_168" class="hl fld"><span class="hl lin">  168 </span><span class="hl opt"><script>hlClose(8, 168);</script>};</span></span>
<span id="l_169" class="hl fld"><span class="hl lin">  169 </span></span>
<span id="l_170" class="hl fld"><span class="hl lin">  170 </span><span class="hl kwb">struct</span> multiboot_header_tag_relocatable</span>
<span id="l_171" class="hl fld"><span class="hl lin">  171 </span><span class="hl opt"><script>hlOpen(171,1);</script>{</span></span>
<span id="l_172" class="hl fld"><span class="hl lin">  172 </span>  multiboot_uint16_t type<span class="hl opt">;</span></span>
<span id="l_173" class="hl fld"><span class="hl lin">  173 </span>  multiboot_uint16_t flags<span class="hl opt">;</span></span>
<span id="l_174" class="hl fld"><span class="hl lin">  174 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_175" class="hl fld"><span class="hl lin">  175 </span>  multiboot_uint32_t min_addr<span class="hl opt">;</span></span>
<span id="l_176" class="hl fld"><span class="hl lin">  176 </span>  multiboot_uint32_t max_addr<span class="hl opt">;</span></span>
<span id="l_177" class="hl fld"><span class="hl lin">  177 </span>  multiboot_uint32_t align<span class="hl opt">;</span></span>
<span id="l_178" class="hl fld"><span class="hl lin">  178 </span>  multiboot_uint32_t preference<span class="hl opt">;</span></span>
<span id="l_179" class="hl fld"><span class="hl lin">  179 </span><span class="hl opt"><script>hlClose(9, 179);</script>};</span></span>
<span id="l_180" class="hl fld"><span class="hl lin">  180 </span></span>
<span id="l_181" class="hl fld"><span class="hl lin">  181 </span><span class="hl kwb">struct</span> multiboot_color</span>
<span id="l_182" class="hl fld"><span class="hl lin">  182 </span><span class="hl opt"><script>hlOpen(182,1);</script>{</span></span>
<span id="l_183" class="hl fld"><span class="hl lin">  183 </span>  multiboot_uint8_t red<span class="hl opt">;</span></span>
<span id="l_184" class="hl fld"><span class="hl lin">  184 </span>  multiboot_uint8_t green<span class="hl opt">;</span></span>
<span id="l_185" class="hl fld"><span class="hl lin">  185 </span>  multiboot_uint8_t blue<span class="hl opt">;</span></span>
<span id="l_186" class="hl fld"><span class="hl lin">  186 </span><span class="hl opt"><script>hlClose(10, 186);</script>};</span></span>
<span id="l_187" class="hl fld"><span class="hl lin">  187 </span></span>
<span id="l_188" class="hl fld"><span class="hl lin">  188 </span><span class="hl kwb">struct</span> multiboot_mmap_entry</span>
<span id="l_189" class="hl fld"><span class="hl lin">  189 </span><span class="hl opt"><script>hlOpen(189,1);</script>{</span></span>
<span id="l_190" class="hl fld"><span class="hl lin">  190 </span>  multiboot_uint64_t addr<span class="hl opt">;</span></span>
<span id="l_191" class="hl fld"><span class="hl lin">  191 </span>  multiboot_uint64_t len<span class="hl opt">;</span></span>
<span id="l_192" class="hl fld"><span class="hl lin">  192 </span><span class="hl ppc">#define MULTIBOOT_MEMORY_AVAILABLE      1</span></span>
<span id="l_193" class="hl fld"><span class="hl lin">  193 </span><span class="hl ppc">#define MULTIBOOT_MEMORY_RESERVED       2</span></span>
<span id="l_194" class="hl fld"><span class="hl lin">  194 </span><span class="hl ppc">#define MULTIBOOT_MEMORY_ACPI_RECLAIMABLE       3</span></span>
<span id="l_195" class="hl fld"><span class="hl lin">  195 </span><span class="hl ppc">#define MULTIBOOT_MEMORY_NVS                    4</span></span>
<span id="l_196" class="hl fld"><span class="hl lin">  196 </span><span class="hl ppc">#define MULTIBOOT_MEMORY_BADRAM                 5</span></span>
<span id="l_197" class="hl fld"><span class="hl lin">  197 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_198" class="hl fld"><span class="hl lin">  198 </span>  multiboot_uint32_t zero<span class="hl opt">;</span></span>
<span id="l_199" class="hl fld"><span class="hl lin">  199 </span><span class="hl opt"><script>hlClose(11, 199);</script>};</span></span>
<span id="l_200" class="hl fld"><span class="hl lin">  200 </span><span class="hl kwc">typedef</span> <span class="hl kwb">struct</span> multiboot_mmap_entry multiboot_memory_map_t<span class="hl opt">;</span></span>
<span id="l_201" class="hl fld"><span class="hl lin">  201 </span></span>
<span id="l_202" class="hl fld"><span class="hl lin">  202 </span><span class="hl kwb">struct</span> multiboot_tag</span>
<span id="l_203" class="hl fld"><span class="hl lin">  203 </span><span class="hl opt"><script>hlOpen(203,1);</script>{</span></span>
<span id="l_204" class="hl fld"><span class="hl lin">  204 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_205" class="hl fld"><span class="hl lin">  205 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_206" class="hl fld"><span class="hl lin">  206 </span><span class="hl opt"><script>hlClose(12, 206);</script>};</span></span>
<span id="l_207" class="hl fld"><span class="hl lin">  207 </span></span>
<span id="l_208" class="hl fld"><span class="hl lin">  208 </span><span class="hl kwb">struct</span> multiboot_tag_string</span>
<span id="l_209" class="hl fld"><span class="hl lin">  209 </span><span class="hl opt"><script>hlOpen(209,1);</script>{</span></span>
<span id="l_210" class="hl fld"><span class="hl lin">  210 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_211" class="hl fld"><span class="hl lin">  211 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_212" class="hl fld"><span class="hl lin">  212 </span>  <span class="hl kwb">char</span> string<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_213" class="hl fld"><span class="hl lin">  213 </span><span class="hl opt"><script>hlClose(13, 213);</script>};</span></span>
<span id="l_214" class="hl fld"><span class="hl lin">  214 </span></span>
<span id="l_215" class="hl fld"><span class="hl lin">  215 </span><span class="hl kwb">struct</span> multiboot_tag_module</span>
<span id="l_216" class="hl fld"><span class="hl lin">  216 </span><span class="hl opt"><script>hlOpen(216,1);</script>{</span></span>
<span id="l_217" class="hl fld"><span class="hl lin">  217 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_218" class="hl fld"><span class="hl lin">  218 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_219" class="hl fld"><span class="hl lin">  219 </span>  multiboot_uint32_t mod_start<span class="hl opt">;</span></span>
<span id="l_220" class="hl fld"><span class="hl lin">  220 </span>  multiboot_uint32_t mod_end<span class="hl opt">;</span></span>
<span id="l_221" class="hl fld"><span class="hl lin">  221 </span>  <span class="hl kwb">char</span> cmdline<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_222" class="hl fld"><span class="hl lin">  222 </span><span class="hl opt"><script>hlClose(14, 222);</script>};</span></span>
<span id="l_223" class="hl fld"><span class="hl lin">  223 </span></span>
<span id="l_224" class="hl fld"><span class="hl lin">  224 </span><span class="hl kwb">struct</span> multiboot_tag_basic_meminfo</span>
<span id="l_225" class="hl fld"><span class="hl lin">  225 </span><span class="hl opt"><script>hlOpen(225,1);</script>{</span></span>
<span id="l_226" class="hl fld"><span class="hl lin">  226 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_227" class="hl fld"><span class="hl lin">  227 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_228" class="hl fld"><span class="hl lin">  228 </span>  multiboot_uint32_t mem_lower<span class="hl opt">;</span></span>
<span id="l_229" class="hl fld"><span class="hl lin">  229 </span>  multiboot_uint32_t mem_upper<span class="hl opt">;</span></span>
<span id="l_230" class="hl fld"><span class="hl lin">  230 </span><span class="hl opt"><script>hlClose(15, 230);</script>};</span></span>
<span id="l_231" class="hl fld"><span class="hl lin">  231 </span></span>
<span id="l_232" class="hl fld"><span class="hl lin">  232 </span><span class="hl kwb">struct</span> multiboot_tag_bootdev</span>
<span id="l_233" class="hl fld"><span class="hl lin">  233 </span><span class="hl opt"><script>hlOpen(233,1);</script>{</span></span>
<span id="l_234" class="hl fld"><span class="hl lin">  234 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_235" class="hl fld"><span class="hl lin">  235 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_236" class="hl fld"><span class="hl lin">  236 </span>  multiboot_uint32_t biosdev<span class="hl opt">;</span></span>
<span id="l_237" class="hl fld"><span class="hl lin">  237 </span>  multiboot_uint32_t slice<span class="hl opt">;</span></span>
<span id="l_238" class="hl fld"><span class="hl lin">  238 </span>  multiboot_uint32_t part<span class="hl opt">;</span></span>
<span id="l_239" class="hl fld"><span class="hl lin">  239 </span><span class="hl opt"><script>hlClose(16, 239);</script>};</span></span>
<span id="l_240" class="hl fld"><span class="hl lin">  240 </span></span>
<span id="l_241" class="hl fld"><span class="hl lin">  241 </span><span class="hl kwb">struct</span> multiboot_tag_mmap</span>
<span id="l_242" class="hl fld"><span class="hl lin">  242 </span><span class="hl opt"><script>hlOpen(242,1);</script>{</span></span>
<span id="l_243" class="hl fld"><span class="hl lin">  243 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_244" class="hl fld"><span class="hl lin">  244 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_245" class="hl fld"><span class="hl lin">  245 </span>  multiboot_uint32_t entry_size<span class="hl opt">;</span></span>
<span id="l_246" class="hl fld"><span class="hl lin">  246 </span>  multiboot_uint32_t entry_version<span class="hl opt">;</span></span>
<span id="l_247" class="hl fld"><span class="hl lin">  247 </span>  <span class="hl kwb">struct</span> multiboot_mmap_entry entries<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span>  </span>
<span id="l_248" class="hl fld"><span class="hl lin">  248 </span><span class="hl opt"><script>hlClose(17, 248);</script>};</span></span>
<span id="l_249" class="hl fld"><span class="hl lin">  249 </span></span>
<span id="l_250" class="hl fld"><span class="hl lin">  250 </span><span class="hl kwb">struct</span> multiboot_vbe_info_block</span>
<span id="l_251" class="hl fld"><span class="hl lin">  251 </span><span class="hl opt"><script>hlOpen(251,1);</script>{</span></span>
<span id="l_252" class="hl fld"><span class="hl lin">  252 </span>  multiboot_uint8_t external_specification<span class="hl opt">[</span><span class="hl num">512</span><span class="hl opt">];</span></span>
<span id="l_253" class="hl fld"><span class="hl lin">  253 </span><span class="hl opt"><script>hlClose(18, 253);</script>};</span></span>
<span id="l_254" class="hl fld"><span class="hl lin">  254 </span></span>
<span id="l_255" class="hl fld"><span class="hl lin">  255 </span><span class="hl kwb">struct</span> multiboot_vbe_mode_info_block</span>
<span id="l_256" class="hl fld"><span class="hl lin">  256 </span><span class="hl opt"><script>hlOpen(256,1);</script>{</span></span>
<span id="l_257" class="hl fld"><span class="hl lin">  257 </span>  multiboot_uint8_t external_specification<span class="hl opt">[</span><span class="hl num">256</span><span class="hl opt">];</span></span>
<span id="l_258" class="hl fld"><span class="hl lin">  258 </span><span class="hl opt"><script>hlClose(19, 258);</script>};</span></span>
<span id="l_259" class="hl fld"><span class="hl lin">  259 </span></span>
<span id="l_260" class="hl fld"><span class="hl lin">  260 </span><span class="hl kwb">struct</span> multiboot_tag_vbe</span>
<span id="l_261" class="hl fld"><span class="hl lin">  261 </span><span class="hl opt"><script>hlOpen(261,1);</script>{</span></span>
<span id="l_262" class="hl fld"><span class="hl lin">  262 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_263" class="hl fld"><span class="hl lin">  263 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_264" class="hl fld"><span class="hl lin">  264 </span></span>
<span id="l_265" class="hl fld"><span class="hl lin">  265 </span>  multiboot_uint16_t vbe_mode<span class="hl opt">;</span></span>
<span id="l_266" class="hl fld"><span class="hl lin">  266 </span>  multiboot_uint16_t vbe_interface_seg<span class="hl opt">;</span></span>
<span id="l_267" class="hl fld"><span class="hl lin">  267 </span>  multiboot_uint16_t vbe_interface_off<span class="hl opt">;</span></span>
<span id="l_268" class="hl fld"><span class="hl lin">  268 </span>  multiboot_uint16_t vbe_interface_len<span class="hl opt">;</span></span>
<span id="l_269" class="hl fld"><span class="hl lin">  269 </span></span>
<span id="l_270" class="hl fld"><span class="hl lin">  270 </span>  <span class="hl kwb">struct</span> multiboot_vbe_info_block vbe_control_info<span class="hl opt">;</span></span>
<span id="l_271" class="hl fld"><span class="hl lin">  271 </span>  <span class="hl kwb">struct</span> multiboot_vbe_mode_info_block vbe_mode_info<span class="hl opt">;</span></span>
<span id="l_272" class="hl fld"><span class="hl lin">  272 </span><span class="hl opt"><script>hlClose(20, 272);</script>};</span></span>
<span id="l_273" class="hl fld"><span class="hl lin">  273 </span></span>
<span id="l_274" class="hl fld"><span class="hl lin">  274 </span><span class="hl kwb">struct</span> multiboot_tag_framebuffer_common</span>
<span id="l_275" class="hl fld"><span class="hl lin">  275 </span><span class="hl opt"><script>hlOpen(275,1);</script>{</span></span>
<span id="l_276" class="hl fld"><span class="hl lin">  276 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_277" class="hl fld"><span class="hl lin">  277 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_278" class="hl fld"><span class="hl lin">  278 </span></span>
<span id="l_279" class="hl fld"><span class="hl lin">  279 </span>  multiboot_uint64_t framebuffer_addr<span class="hl opt">;</span></span>
<span id="l_280" class="hl fld"><span class="hl lin">  280 </span>  multiboot_uint32_t framebuffer_pitch<span class="hl opt">;</span></span>
<span id="l_281" class="hl fld"><span class="hl lin">  281 </span>  multiboot_uint32_t framebuffer_width<span class="hl opt">;</span></span>
<span id="l_282" class="hl fld"><span class="hl lin">  282 </span>  multiboot_uint32_t framebuffer_height<span class="hl opt">;</span></span>
<span id="l_283" class="hl fld"><span class="hl lin">  283 </span>  multiboot_uint8_t framebuffer_bpp<span class="hl opt">;</span></span>
<span id="l_284" class="hl fld"><span class="hl lin">  284 </span><span class="hl ppc">#define MULTIBOOT_FRAMEBUFFER_TYPE_INDEXED 0</span></span>
<span id="l_285" class="hl fld"><span class="hl lin">  285 </span><span class="hl ppc">#define MULTIBOOT_FRAMEBUFFER_TYPE_RGB     1</span></span>
<span id="l_286" class="hl fld"><span class="hl lin">  286 </span><span class="hl ppc">#define MULTIBOOT_FRAMEBUFFER_TYPE_EGA_TEXT 2</span></span>
<span id="l_287" class="hl fld"><span class="hl lin">  287 </span>  multiboot_uint8_t framebuffer_type<span class="hl opt">;</span></span>
<span id="l_288" class="hl fld"><span class="hl lin">  288 </span>  multiboot_uint16_t reserved<span class="hl opt">;</span></span>
<span id="l_289" class="hl fld"><span class="hl lin">  289 </span><span class="hl opt"><script>hlClose(21, 289);</script>};</span></span>
<span id="l_290" class="hl fld"><span class="hl lin">  290 </span></span>
<span id="l_291" class="hl fld"><span class="hl lin">  291 </span><span class="hl kwb">struct</span> multiboot_tag_framebuffer</span>
<span id="l_292" class="hl fld"><span class="hl lin">  292 </span><span class="hl opt"><script>hlOpen(292,1);</script>{</span></span>
<span id="l_293" class="hl fld"><span class="hl lin">  293 </span>  <span class="hl kwb">struct</span> multiboot_tag_framebuffer_common common<span class="hl opt">;</span></span>
<span id="l_294" class="hl fld"><span class="hl lin">  294 </span></span>
<span id="l_295" class="hl fld"><span class="hl lin">  295 </span>  <span class="hl kwb">union</span></span>
<span id="l_296" class="hl fld"><span class="hl lin">  296 </span>  <span class="hl opt"><script>hlOpen(296,2);</script>{</span></span>
<span id="l_297" class="hl fld"><span class="hl lin">  297 </span>    <span class="hl kwb">struct</span></span>
<span id="l_298" class="hl fld"><span class="hl lin">  298 </span>    <span class="hl opt"><script>hlOpen(298,3);</script>{</span></span>
<span id="l_299" class="hl fld"><span class="hl lin">  299 </span>      multiboot_uint16_t framebuffer_palette_num_colors<span class="hl opt">;</span></span>
<span id="l_300" class="hl fld"><span class="hl lin">  300 </span>      <span class="hl kwb">struct</span> multiboot_color framebuffer_palette<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_301" class="hl fld"><span class="hl lin">  301 </span>    <span class="hl opt"><script>hlClose(24, 301);</script>};</span></span>
<span id="l_302" class="hl fld"><span class="hl lin">  302 </span>    <span class="hl kwb">struct</span></span>
<span id="l_303" class="hl fld"><span class="hl lin">  303 </span>    <span class="hl opt"><script>hlOpen(303,3);</script>{</span></span>
<span id="l_304" class="hl fld"><span class="hl lin">  304 </span>      multiboot_uint8_t framebuffer_red_field_position<span class="hl opt">;</span></span>
<span id="l_305" class="hl fld"><span class="hl lin">  305 </span>      multiboot_uint8_t framebuffer_red_mask_size<span class="hl opt">;</span></span>
<span id="l_306" class="hl fld"><span class="hl lin">  306 </span>      multiboot_uint8_t framebuffer_green_field_position<span class="hl opt">;</span></span>
<span id="l_307" class="hl fld"><span class="hl lin">  307 </span>      multiboot_uint8_t framebuffer_green_mask_size<span class="hl opt">;</span></span>
<span id="l_308" class="hl fld"><span class="hl lin">  308 </span>      multiboot_uint8_t framebuffer_blue_field_position<span class="hl opt">;</span></span>
<span id="l_309" class="hl fld"><span class="hl lin">  309 </span>      multiboot_uint8_t framebuffer_blue_mask_size<span class="hl opt">;</span></span>
<span id="l_310" class="hl fld"><span class="hl lin">  310 </span>    <span class="hl opt"><script>hlClose(25, 310);</script>};</span></span>
<span id="l_311" class="hl fld"><span class="hl lin">  311 </span>  <span class="hl opt"><script>hlClose(23, 311);</script>};</span></span>
<span id="l_312" class="hl fld"><span class="hl lin">  312 </span><span class="hl opt"><script>hlClose(22, 312);</script>};</span></span>
<span id="l_313" class="hl fld"><span class="hl lin">  313 </span></span>
<span id="l_314" class="hl fld"><span class="hl lin">  314 </span><span class="hl kwb">struct</span> multiboot_tag_elf_sections</span>
<span id="l_315" class="hl fld"><span class="hl lin">  315 </span><span class="hl opt"><script>hlOpen(315,1);</script>{</span></span>
<span id="l_316" class="hl fld"><span class="hl lin">  316 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_317" class="hl fld"><span class="hl lin">  317 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_318" class="hl fld"><span class="hl lin">  318 </span>  multiboot_uint32_t num<span class="hl opt">;</span></span>
<span id="l_319" class="hl fld"><span class="hl lin">  319 </span>  multiboot_uint32_t entsize<span class="hl opt">;</span></span>
<span id="l_320" class="hl fld"><span class="hl lin">  320 </span>  multiboot_uint32_t shndx<span class="hl opt">;</span></span>
<span id="l_321" class="hl fld"><span class="hl lin">  321 </span>  <span class="hl kwb">char</span> sections<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_322" class="hl fld"><span class="hl lin">  322 </span><span class="hl opt"><script>hlClose(26, 322);</script>};</span></span>
<span id="l_323" class="hl fld"><span class="hl lin">  323 </span></span>
<span id="l_324" class="hl fld"><span class="hl lin">  324 </span><span class="hl kwb">struct</span> multiboot_tag_apm</span>
<span id="l_325" class="hl fld"><span class="hl lin">  325 </span><span class="hl opt"><script>hlOpen(325,1);</script>{</span></span>
<span id="l_326" class="hl fld"><span class="hl lin">  326 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_327" class="hl fld"><span class="hl lin">  327 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_328" class="hl fld"><span class="hl lin">  328 </span>  multiboot_uint16_t version<span class="hl opt">;</span></span>
<span id="l_329" class="hl fld"><span class="hl lin">  329 </span>  multiboot_uint16_t cseg<span class="hl opt">;</span></span>
<span id="l_330" class="hl fld"><span class="hl lin">  330 </span>  multiboot_uint32_t offset<span class="hl opt">;</span></span>
<span id="l_331" class="hl fld"><span class="hl lin">  331 </span>  multiboot_uint16_t cseg_16<span class="hl opt">;</span></span>
<span id="l_332" class="hl fld"><span class="hl lin">  332 </span>  multiboot_uint16_t dseg<span class="hl opt">;</span></span>
<span id="l_333" class="hl fld"><span class="hl lin">  333 </span>  multiboot_uint16_t flags<span class="hl opt">;</span></span>
<span id="l_334" class="hl fld"><span class="hl lin">  334 </span>  multiboot_uint16_t cseg_len<span class="hl opt">;</span></span>
<span id="l_335" class="hl fld"><span class="hl lin">  335 </span>  multiboot_uint16_t cseg_16_len<span class="hl opt">;</span></span>
<span id="l_336" class="hl fld"><span class="hl lin">  336 </span>  multiboot_uint16_t dseg_len<span class="hl opt">;</span></span>
<span id="l_337" class="hl fld"><span class="hl lin">  337 </span><span class="hl opt"><script>hlClose(27, 337);</script>};</span></span>
<span id="l_338" class="hl fld"><span class="hl lin">  338 </span></span>
<span id="l_339" class="hl fld"><span class="hl lin">  339 </span><span class="hl kwb">struct</span> multiboot_tag_efi32</span>
<span id="l_340" class="hl fld"><span class="hl lin">  340 </span><span class="hl opt"><script>hlOpen(340,1);</script>{</span></span>
<span id="l_341" class="hl fld"><span class="hl lin">  341 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_342" class="hl fld"><span class="hl lin">  342 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_343" class="hl fld"><span class="hl lin">  343 </span>  multiboot_uint32_t pointer<span class="hl opt">;</span></span>
<span id="l_344" class="hl fld"><span class="hl lin">  344 </span><span class="hl opt"><script>hlClose(28, 344);</script>};</span></span>
<span id="l_345" class="hl fld"><span class="hl lin">  345 </span></span>
<span id="l_346" class="hl fld"><span class="hl lin">  346 </span><span class="hl kwb">struct</span> multiboot_tag_efi64</span>
<span id="l_347" class="hl fld"><span class="hl lin">  347 </span><span class="hl opt"><script>hlOpen(347,1);</script>{</span></span>
<span id="l_348" class="hl fld"><span class="hl lin">  348 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_349" class="hl fld"><span class="hl lin">  349 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_350" class="hl fld"><span class="hl lin">  350 </span>  multiboot_uint64_t pointer<span class="hl opt">;</span></span>
<span id="l_351" class="hl fld"><span class="hl lin">  351 </span><span class="hl opt"><script>hlClose(29, 351);</script>};</span></span>
<span id="l_352" class="hl fld"><span class="hl lin">  352 </span></span>
<span id="l_353" class="hl fld"><span class="hl lin">  353 </span><span class="hl kwb">struct</span> multiboot_tag_smbios</span>
<span id="l_354" class="hl fld"><span class="hl lin">  354 </span><span class="hl opt"><script>hlOpen(354,1);</script>{</span></span>
<span id="l_355" class="hl fld"><span class="hl lin">  355 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_356" class="hl fld"><span class="hl lin">  356 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_357" class="hl fld"><span class="hl lin">  357 </span>  multiboot_uint8_t major<span class="hl opt">;</span></span>
<span id="l_358" class="hl fld"><span class="hl lin">  358 </span>  multiboot_uint8_t minor<span class="hl opt">;</span></span>
<span id="l_359" class="hl fld"><span class="hl lin">  359 </span>  multiboot_uint8_t reserved<span class="hl opt">[</span><span class="hl num">6</span><span class="hl opt">];</span></span>
<span id="l_360" class="hl fld"><span class="hl lin">  360 </span>  multiboot_uint8_t tables<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_361" class="hl fld"><span class="hl lin">  361 </span><span class="hl opt"><script>hlClose(30, 361);</script>};</span></span>
<span id="l_362" class="hl fld"><span class="hl lin">  362 </span></span>
<span id="l_363" class="hl fld"><span class="hl lin">  363 </span><span class="hl kwb">struct</span> multiboot_tag_old_acpi</span>
<span id="l_364" class="hl fld"><span class="hl lin">  364 </span><span class="hl opt"><script>hlOpen(364,1);</script>{</span></span>
<span id="l_365" class="hl fld"><span class="hl lin">  365 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_366" class="hl fld"><span class="hl lin">  366 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_367" class="hl fld"><span class="hl lin">  367 </span>  multiboot_uint8_t rsdp<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_368" class="hl fld"><span class="hl lin">  368 </span><span class="hl opt"><script>hlClose(31, 368);</script>};</span></span>
<span id="l_369" class="hl fld"><span class="hl lin">  369 </span></span>
<span id="l_370" class="hl fld"><span class="hl lin">  370 </span><span class="hl kwb">struct</span> multiboot_tag_new_acpi</span>
<span id="l_371" class="hl fld"><span class="hl lin">  371 </span><span class="hl opt"><script>hlOpen(371,1);</script>{</span></span>
<span id="l_372" class="hl fld"><span class="hl lin">  372 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_373" class="hl fld"><span class="hl lin">  373 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_374" class="hl fld"><span class="hl lin">  374 </span>  multiboot_uint8_t rsdp<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_375" class="hl fld"><span class="hl lin">  375 </span><span class="hl opt"><script>hlClose(32, 375);</script>};</span></span>
<span id="l_376" class="hl fld"><span class="hl lin">  376 </span></span>
<span id="l_377" class="hl fld"><span class="hl lin">  377 </span><span class="hl kwb">struct</span> multiboot_tag_network</span>
<span id="l_378" class="hl fld"><span class="hl lin">  378 </span><span class="hl opt"><script>hlOpen(378,1);</script>{</span></span>
<span id="l_379" class="hl fld"><span class="hl lin">  379 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_380" class="hl fld"><span class="hl lin">  380 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_381" class="hl fld"><span class="hl lin">  381 </span>  multiboot_uint8_t dhcpack<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_382" class="hl fld"><span class="hl lin">  382 </span><span class="hl opt"><script>hlClose(33, 382);</script>};</span></span>
<span id="l_383" class="hl fld"><span class="hl lin">  383 </span></span>
<span id="l_384" class="hl fld"><span class="hl lin">  384 </span><span class="hl kwb">struct</span> multiboot_tag_efi_mmap</span>
<span id="l_385" class="hl fld"><span class="hl lin">  385 </span><span class="hl opt"><script>hlOpen(385,1);</script>{</span></span>
<span id="l_386" class="hl fld"><span class="hl lin">  386 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_387" class="hl fld"><span class="hl lin">  387 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_388" class="hl fld"><span class="hl lin">  388 </span>  multiboot_uint32_t descr_size<span class="hl opt">;</span></span>
<span id="l_389" class="hl fld"><span class="hl lin">  389 </span>  multiboot_uint32_t descr_vers<span class="hl opt">;</span></span>
<span id="l_390" class="hl fld"><span class="hl lin">  390 </span>  multiboot_uint8_t efi_mmap<span class="hl opt">[</span><span class="hl num">0</span><span class="hl opt">];</span></span>
<span id="l_391" class="hl fld"><span class="hl lin">  391 </span><span class="hl opt"><script>hlClose(34, 391);</script>};</span> </span>
<span id="l_392" class="hl fld"><span class="hl lin">  392 </span></span>
<span id="l_393" class="hl fld"><span class="hl lin">  393 </span><span class="hl kwb">struct</span> multiboot_tag_efi32_ih</span>
<span id="l_394" class="hl fld"><span class="hl lin">  394 </span><span class="hl opt"><script>hlOpen(394,1);</script>{</span></span>
<span id="l_395" class="hl fld"><span class="hl lin">  395 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_396" class="hl fld"><span class="hl lin">  396 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_397" class="hl fld"><span class="hl lin">  397 </span>  multiboot_uint32_t pointer<span class="hl opt">;</span></span>
<span id="l_398" class="hl fld"><span class="hl lin">  398 </span><span class="hl opt"><script>hlClose(35, 398);</script>};</span></span>
<span id="l_399" class="hl fld"><span class="hl lin">  399 </span></span>
<span id="l_400" class="hl fld"><span class="hl lin">  400 </span><span class="hl kwb">struct</span> multiboot_tag_efi64_ih</span>
<span id="l_401" class="hl fld"><span class="hl lin">  401 </span><span class="hl opt"><script>hlOpen(401,1);</script>{</span></span>
<span id="l_402" class="hl fld"><span class="hl lin">  402 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_403" class="hl fld"><span class="hl lin">  403 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_404" class="hl fld"><span class="hl lin">  404 </span>  multiboot_uint64_t pointer<span class="hl opt">;</span></span>
<span id="l_405" class="hl fld"><span class="hl lin">  405 </span><span class="hl opt"><script>hlClose(36, 405);</script>};</span></span>
<span id="l_406" class="hl fld"><span class="hl lin">  406 </span></span>
<span id="l_407" class="hl fld"><span class="hl lin">  407 </span><span class="hl kwb">struct</span> multiboot_tag_load_base_addr</span>
<span id="l_408" class="hl fld"><span class="hl lin">  408 </span><span class="hl opt"><script>hlOpen(408,1);</script>{</span></span>
<span id="l_409" class="hl fld"><span class="hl lin">  409 </span>  multiboot_uint32_t type<span class="hl opt">;</span></span>
<span id="l_410" class="hl fld"><span class="hl lin">  410 </span>  multiboot_uint32_t size<span class="hl opt">;</span></span>
<span id="l_411" class="hl fld"><span class="hl lin">  411 </span>  multiboot_uint32_t load_base_addr<span class="hl opt">;</span></span>
<span id="l_412" class="hl fld"><span class="hl lin">  412 </span><span class="hl opt"><script>hlClose(37, 412);</script>};</span></span>
<span id="l_413" class="hl fld"><span class="hl lin">  413 </span></span>
<span id="l_414" class="hl fld"><span class="hl lin">  414 </span><span class="hl ppc">#endif</span> <span class="hl com">/* ! ASM_FILE */</span><span class="hl ppc"></span></span>
<span id="l_415" class="hl fld"><span class="hl lin">  415 </span></span>
<span id="l_416" class="hl fld"><span class="hl lin">  416 </span><span class="hl ppc">#endif</span> <span class="hl com">/* ! MULTIBOOT_HEADER */</span><span class="hl ppc"></span></span>
</pre><script type="text/javascript" src="/scripts/highlight_cf_f.js">
</script>
  </BODY></HTML><!--HTML generated by highlight, http://www.andre-simon.de/-->
