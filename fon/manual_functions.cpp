/* manual_functions.cpp
 *
 * Copyright (C) 1992-2023 Paul Boersma
 *
 * This code is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This code is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this work. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ManPagesM.h"
#include "praat_version.h"

void manual_functions_init (ManPages me);
void manual_functions_init (ManPages me) {

MAN_PAGES_BEGIN R"~~~(
################################################################################
"Functions"
© Paul Boersma, 2022-05-27

A growing list of functions that you can use in @formulas and @scripting...

, @`abs` (%`x`) – absolute value
, @`abs#` (%`vector#`) – absolute value of each element of %`vector#`
, @`abs##` (%`matrix##`) – absolute value of each cell of %`matrix##`
, @`appendFile` (%`filePath$`, `...`) – write texts, numbers, vectors and so on
	at the end of an existing file (create such a file if it does not exist yet)
, @`appendFileLine` (%`filePath$`, `...`) – write texts, numbers, vectors and so on,
	followed by a newline, at the end of an existing file
	(create such a file if it does not exist yet)
, @`arccos` (%`x`) – inverse cosine
, @`arccos#` (%`vector#`) – inverse cosine of each element of %`vector#`
, @`arccos##` (%`matrix##`) – inverse cosine of each cell of %`matrix##`
, @`arccosh` (%`x`) – inverse hyperbolic cosine
, @`arccosh#` (%`vector#`) – inverse hyperbolic cosine of each element of %`vector#`
, @`arccosh##` (%`matrix##`) – inverse hyperbolic cosine of each cell of %`matrix##`
, @`arcsin` (%`x`) – inverse sine
, @`arcsin#` (%`vector#`) – inverse sine of each element of %`vector#`
, @`arcsin##` (%`matrix##`) – inverse sine of each cell of %`matrix##`
, @`arcsinh` (%`x`) – inverse hyperbolic sine
, @`arcsinh#` (%`vector#`) – inverse hyperbolic sine of each element of %`vector#`
, @`arcsinh##` (%`matrix##`) – inverse hyperbolic sine of each cell of %`matrix##`
, @`arctan` (%`x`) – inverse tangent
, @`arctan#` (%`vector#`) – inverse tangent of each element of %`vector#`
, @`arctan##` (%`matrix##`) – inverse tangent of each cell of %`matrix##`
, @`arctanh` (%`x`) – inverse hyperbolic tangent
, @`arctanh#` (%`vector#`) – inverse hyperbolic tangent of each element of %`vector#`
, @`arctanh##` (%`matrix##`) – inverse hyperbolic tangent of each cell of %`matrix##`
, @`backslashTrigraphsToUnicode$` (%`string$`) – convert e.g. \bsct to \ct
, @`barkToHertz` (%`x`) – from Bark-rate to acoustic frequency
, @`besselI` (%`n`, %`x`) – modified Bessel function of the first kind, %I__%n_
, @`besselK` (%`n`, %`x`) – modified Bessel function of the second kind, %K__%n_
, @`beta` (%`x`, %`y`) – \be function
, @`between_by#` (%`low`, %`high`, %`step`) – symmetrically dispersed numbers between %`low` and %`high`, in steps of %`step`
, @`between_count#` (%`low`, %`high`, %`n`) – %`n` symmetrically dispersed numbers between %`low` and %`high` (bin centres)
, @`binomialP` (%`p`, %`k`, %`n`) – probability of Bernoulli event occurring at most %`k` in %`n` times
, @`binomialQ` (%`p`, %`k`, %`n`) – probability of Bernoulli event occurring at least %`k` in %`n` times
, @`ceiling` (%x) – round up to integer
, @`ceiling#` (%`vector#`) – round up each element of %`vector#`
, @`ceiling##` (%`matrix##`) – round up each cell of %`matrix##`
, @`center` (%`v#`) – center (or centre) of gravity
, @`chiSquareP` (%`chiSquare`, %`df`) – area under the %\ci^2 curve up to %`chiSquare`
, @`chiSquareQ` (%`chiSquare`, %`df`) – area under the %\ci^2 curve after %`chiSquare`
, @`chooseFolder$` (%`title$`) – pops up a folder selection window
, @`chooseReadFile$` (%`title$`) – pops up a file selection window for opening (or appending to) an existing file
, @`chooseWriteFile$` (%`title$`, %`defaultFilename$`) – pops up a file selection window for saving to a new file
, @`columnSums#` (%`matrix##`)
, @`cos` (%`x`) – cosine
, @`cos#` (%`vector#`) – cosine of each element of %`vector#`
, @`cos##` (%`matrix##`) – cosine of each cell of %`matrix##`
, @`cosh` (%x) – hyperbolic cosine
, @`cosh#` (%`vector#`) – hyperbolic cosine of each element of %`vector#`
, @`cosh##` (%`matrix##`) – hyperbolic cosine of each cell of %`matrix##`
, @`createFolder` (%`folderPath$`) – create a new folder, or do nothing if it already exists
, @`date$` ( ) – current local date and time in the form "Mon Nov  8 16:32:42 2021"
, @`date#` ( ) – current local date and time in the form { 2021, 11, 8, 16, 32, 42 }
, @`date_utc$` ( ) – current standard date and time in the form "Mon Nov  8 15:32:42 2021"
, @`date_utc#` ( ) – current standard date and time in the form { 2021, 11, 8, 15, 32, 42 }
, @`deleteFile` (%`filePath$`) – delete a file, or do nothing if it does not exist
, @`differenceLimensToPhon` (%`x`) – from jnd-scale to perceptual loudness
, @`endsWith` (%`string$`, %`part$`) – determine whether %`string$` ends in %`part$`
, @`erb` (%`f`) – equivalent rectangular bandwidth for frequency %`f`
, @`erbToHertz` (%`x`) – from ERB-rate to acoustic frequency
, @`erf` (%`x`) – error function, the integral of the Gaussian
, @`erfc` (%`x`) – complement of the error function, i.e. 1 − erf (%`x`);
	this is a separate function because erf (%`x`) can be close to 1
, @`exp` (%`x`) – exponentiation, i.e. %e^%`x`
, @`exp#` (%`vector#`) – exponentiate each element of %`vector#`
, @`exp##` (%`matrix##`) – exponentiate each cell of %`matrix##`
, @`extractLine$` (%`string$`, %`part$`) – everything that comes after the first occurrence of %`part$` in %`string$`
, @`extractNumber` (%`string$`, %`part$`) – the first number after the first occurrence of %`part$% in %`string$`
, @`extractWord$` (%`string$`, %`part$`) – the first “word” after the first occurrence of %`part$% in %`string$`
, @`fileNames$#` (%`folderNameOrPattern$`) – get the names (not the whole paths) of the files in a folder
	or that match a pattern with an asterisk
, @`fileReadable` (%`filePath$`) – 1 if the file exists and can be read, 0 otherwise
, @`fisherP` (%`f`, %`df1`, %`df2`) – area under the Fisher %F curve up to %`f`
, @`fisherQ` (%`f`, %`df1`, %`df2`) – area under the Fisher %F curve after %`f`
, @`fixed$` (%`number`, %`precision`) – format a number as a string, with %`precision` digits after the decimal point
, @`floor` (%`x`) – round down to integer
, @`floor#` (%`vector#`) – round down each element of %`vector#`
, @`floor##` (%`matrix##`) – round down each cell of %`matrix##`
, @`folderNames$#` (%`folderNameOrPattern$`) – get the names (not the whole paths) of the subfolders in a folder
	or that match a pattern with an asterisk
, @`from_to#` (%`m`, %`n`) – the integers from %`m` through %`n`
, @`from_to_by#` (%`m`, %`n`, %`step`) – numbers from %`m` through %`n`, in steps of %`step`
, @`from_to_count#` (%`start`, %`end`, %`n`) – %`n` numbers from %`start` through %`end`
, @`gaussP` (%`z`) – area under the normal curve up to %`z`
, @`gaussQ` (%`z`) – area under the normal curve after %`z`
, @`hertzToBark` (%`x`) – from acoustic frequency to Bark-rate
, @`hertzToErb` (%`x`) – from acoustic frequency to ERB-rate
, @`hertzToMel` (%`x`) – from acoustic frequency to mel
, @`hertzToSemitones` (%`x`) – from acoustic frequency to logarithmic scale %re 100 Hz
, @`imax` (%`x`, `...`) – location of the maximum
, @`imin` (%`x`, `...`) – location of the minimum
, @`index` (%`string$`, %`part$`) – look up a substring, or 0 if not found
, @`index` (%`strings$#`, %`s$`) – look up whether and where %`s$` first occurs in %`strings$`
, @`index_regex` (%`string$`, %`regex$`) – determine whether and where %`string$` first matches %`regex$`
, @`inner` (%`a#`, %`b#`) – inner product
, @`invBinomialP` (%`P`, %`k`, %`n`) – inverse of `binomialP`
, @`invBinomialQ` (%`Q`, %`k`, %`n`) – inverse of `binomialQ`
, @`invChiSquareQ` (%`q`, %`df`) – inverse of `chiSquareQ`
, @`invFisherQ` (%`q`, %`df1`, %`df2`) – inverse of `fisherQ`
, @`invGaussQ` (%`z`) – inverse of `gaussQ`
, @`invSigmoid` (%`x`) – inverse `sigmoid`
, @`invSigmoid#` (%`vector#`) – inverse sigmoid of each element of %`vector#`
, @`invSigmoid##` (%`matrix##`) – inverse sigmoid of each cell of %`matrix##`
, @`invStudentQ` (%`q`, %`df`) – inverse studentQ
, @`left$` (%`string$`, %`n`) – the %n first characters in %`string$`
, @`length` (%`string$`) – number of Unicode characters in %`string$`
, @`ln` (%`x`) – natural logarithm, base %e
, @`ln#` (%`vector#`) – natural logarithm of each element of %`vector#`
, @`ln##` (%`matrix##`) – natural logarithm of each cell of %`matrix##`
, @`lnGamma` (%`x`) – logarithm of the \Ga function
, @`log2` (%`x`) – logarithm, base 2
, @`log2#` (%`vector#`) – base-2 logarithm of each element of %`vector#`
, @`log2##` (%`matrix##`) – base-2 logarithm of each cell of %`matrix##`
, @`log10` (%x) – logarithm, base 10
, @`log10#` (%`vector#`) – base-10 logarithm of each element of %`vector#`
, @`log10##` (%`matrix##`) – base-10 logarithm of each cell of %`matrix##`
, @`max` (%`x`, `...`) – maximum
, @`mean` (%`v#`) – average of the elements of a vector
, @`melToHertz` (%`x`) – from mel to acoustic frequency
, @`mid$` (%`string$`, %`from`, %`n`) – the %`n` characters in %`string$` starting at position %`from`
, @`min` (%`x`, `...`) – minimum
, @`mul##` (%`a##`, %`b##`) – matrix multiplication
, @`number` (%`a$`) – interpret a string as a number
, @`number#` (%`a$#`) – interpret strings as numbers
, @`numberOfColumns` (%`matrix##`)#
, @`numberOfRows` (%`matrix##`)#
, @`outer##` (%`a#`, %`b#`) – outer product, i.e. %%result__ij_% = %%a__i_%%%b__j_%
, @`percent$` (%`number`, %`precision`) – format a number as a string,
	with a trailing percent sign and %`precision` digits after the decimal point
, @`phonToDifferenceLimens` (%`x`) – from perceptual loudness to jnd-scale
, @`randomBernoulli` (%`p`) – Bernoulli-distributed random deviate (0 or 1)
, @`randomBernoulli#` (%`n`, %`p`) – %`n` independent Bernoulli-distributed zeroes and ones
, @`randomGamma` (%`shape`, %`rate`) – gamma-distributed random deviate
, @`randomGamma#` (%`n`, %`shape`, %`rate`) – %n independent gamma-distributed random numbers
, @`randomGamma#` (%`vector#`, %`shape`, %`rate`) – duplicate %`vector#`,
	and replace all elements with independent gamma-distributed random numbers
, @`randomGamma##` (%`nrow`, %`ncol`, %`shape`, %`rate`) – %nrow \xx %ncol independent gamma-distributed random numbers
, @`randomGamma##` (%`matrix##`, %`shape`, %`rate`) – duplicate %`matrix##`,
	and replace all cells with independent gamma-distributed random numbers
, @`randomGauss` (%`mu`, %`sigma`) – normally distributed random deviate
, @`randomGauss#` (%`n`, %`mu`, %`sigma`) – %n independent normally distributed random numbers
, @`randomGauss#` (%`vector#`, %`mu`, %`sigma`) – duplicate %`vector#`,
	and replace all elements with independent normally distributed random numbers
, @`randomGauss##` (%`nrow`, %`ncol`, %`mu`, %`sigma`) – %`nrow` \xx %`ncol` independent normally distributed random numbers
, @`randomGauss##` (%`matrix##`, %`mu`, %`sigma`) – duplicate %`matrix##`,
	and replace all cells with independent normally distributed random numbers
, @`randomInteger` (%`min`, %`max`) – uniformly distributed integer random deviate
, @`randomInteger#` (%`n`, %`min`, %`max`) – %`n` independent uniformly distributed random integers
, @`randomInteger#` (%`vector#`, %`min`, %`max`) – duplicate %`vector#`,
	and replace all elements with independent uniformly distributed random integers
, @`randomInteger##` (%`nrow`, %`ncol`, %`min`, %`max`) – %`nrow` \xx %`ncol` independent uniformly distributed random integers
, @`randomInteger##` (%`matrix##`, %`min`, %`max`) – duplicate %`matrix##`,
	and replace all cells with independent uniformly distributed random integers
, @`randomPoisson` (%`mean`) – Poisson-distributed random deviate
, @`randomPoisson#` (%`n`, %`mean`) – %`n` independent Poisson-distributed random numbers
, @`randomPoisson#` (%`vector#`, %`mean`) – duplicate %`vector#`,
	and replace all elements with independent Poisson-distributed random numbers
, @`randomPoisson##` (%nrow, %ncol, %`mean`) – %`nrow` \xx %`ncol` independent Poisson-distributed random numbers
, @`randomPoisson##` (%`matrix##`, %`mean`) – duplicate %`matrix##`,
	and replace all cells with independent Poisson-distributed random numbers
, @`randomUniform` (%`min`, %`max`) – uniformly distributed random deviate
, @`randomUniform#` (%`n`, %`min`, %`max`) – %n independent uniformly distributed random numbers
, @`randomUniform#` (%`vector#`, %min, %max) – duplicate %`vector#`,
	and replace all elements with independent uniformly distributed random numbers
, @`randomUniform##` (%`nrow`, %`ncol`, %`min`, %`max`) – %`nrow` \xx %`ncol` independent uniformly distributed random numbers
, @`randomUniform##` (%`matrix##`, %`min`, %`max`) – duplicate %`matrix##`,
	and replace all cells with independent uniformly distributed random numbers
, @`random_initializeSafelyAndUnpredictably` ( ) – undoes the effects of the following function
, @`random_initializeWithSeedUnsafelyButPredictably` (%`seed`) – reproducible sequence of random numbers
, @`readFile` (%`filePath$`) – read a number from a text file
, @`readFile$` (%`filePath$`) – read a whole text file into a string
, @`readLinesFromFile$#` (%`filePath$`) – read all lines from a text file
, @`rectify` (%`x`) – set to zero if negative (no change if positive)
, @`rectify#` (%`vector#`) – rectify each element of %`vector#`
, @`rectify##` (%`matrix##`) – rectify each cell of %`matrix##`
, @`repeat#` (%`v#`, %`n`) – repeat the whole sequence of elements of %`v#` %`n` times
, @`replace$` (%`a$`, %`b$`, %`c$`, %`n`) – within %`a$`, replace the first %`n` occurrences of %`b$` with %`c$`, or all if %`n` = 0
, @`replace_regex$` (%`a$`, %`b$`, %`c$`, %`n`) – within %`a$`,
	replace the first %`n` matches of regular expression %`b$` with the regular expression %`c$`, or all if %`n` = 0
, @`right$` (%`string$`, %`n`) – the %n last characters in %`string$`
, @`rindex` (%`string$`, %`part$`) – look up a substring from the end, or 0 if not found
, @`rindex` (%`strings$#`, %`s$`) – look up whether and where %`s$` last occurs in %`strings$#`
, @`rindex_regex` (%`string$`, %`regex$`) – determine whether and where %`string$` last matches %`regex$`
, @`round` (%`x`) – nearest integer
, @`round#` (%`vector#`) – nearest integer of each element of %`vector#`
, @`round##` (%`matrix##`) – nearest integer of each cell of %`matrix##`
, @`rowSums#` (%`matrix##`)
, @`semitonesToHertz` (%`x`) – from logarithmic scale %re 100 Hz to acoustic frequency
, @`sigmoid` (%`x`) – 1 / (1 + %e^^-%`x`^)
, @`sigmoid#` (%`vector#`) – sigmoid of each element of %`vector#`
, @`sigmoid##` (%`matrix##`) – sigmoid of each cell of %`matrix##`
, @`sin` (%`x`) – sine
, @`sin#` (%`vector#`) – sine of each element of %`vector#`
, @`sin##` (%`matrix##`) – sine of each cell of %`matrix##`
, @`sinc` (%`x`) – sinus cardinalis: sin (%`x`) / %`x`
, @`sincpi` (%`x`) – sin (%\pi%x) / (%\pi%x)
, @`sinh` (%`x`) – hyperbolic sine
, @`sinh#` (%`vector#`) – hyperbolic sine of each element of %`vector#`
, @`sinh##` (%`matrix##`) – hyperbolic sine of each cell of %`matrix##`
, @`size` (%`v#`) – number of elements
, @`shuffle#` (%`vector#`) – randomize order
, @`softmax#` (%`vector#`)
, @`softmaxPerRow##` (%`matrix##`)
, @`sort#` (%`vector#`) – reshuffle in increasing order
, @`splitByWhitespace$` (%%string$%) – split a string into inks
, @`sqrt` (%`x`) – square root
, @`sqrt#` (%`vector#`) – square root of each element of %`vector#`
, @`sqrt##` (%`matrix##`) – square root of each cell of %`matrix##`
, @`startsWith` (%`string$`, %`part$`) – determine whether %`string$` starts with %`part$`
, @`stdev` (%`v#`) – standard deviation of the elements of a vector
, @`stopwatch` – give the current value of the timer, which is then immediately reset to zero (note: no parentheses)
, @`string$` (%`number`) – format a number as a string
, @`studentP` (%`t`, %`df`) – area under the Student %T curve up to %`t`
, @`studentQ` (%`t`, %`df`) – area under the Student %T curve after %`t`
, @`sum` (%`v#`) – sum the elements
, @`sumOver` (%`loopVariable` `to` %`n`, %`numericExpressionOptionallyUsingLoopVariable`) – \Si
, @`tan` (%`x`) – tangent
, @`tan#` (%`vector#`) – tangent of each element of %`vector#`
, @`tan##` (%`matrix##`) – tangent of each cell of %`matrix##`
, @`tanh` (%`x`) – hyperbolic tangent
, @`tanh#` (%`vector#`) – hyperbolic tangent of each element of %`vector#`
, @`tanh##` (%`matrix##`) – hyperbolic tangent of each cell of %`matrix##`
, @`to#` (%`n`) – the integers 1 through %`n`
, @`transpose##` (%`matrix##`) – flip matrix along its diagonal
, @`unicode` (%`c$`) – the Unicode codepoint number that corresponds to character %`c$`
, @`unicode$` (%`n`) – the character that corresponds to Unicode codepoint %`n`
, @`unicodeToBackslashTrigraphs$` (%`string$`) – convert e.g. \ct to \bsct
, @`writeFile` (%`filePath$`, `...`) – create a new text file, and write texts, numbers, vectors and so on into it
, @`writeFileLine` (%`filePath$`, `...`) – create a new text file, write texts, numbers, vectors and so on into it, followed by a newline
, @`zero#` (%`n`) – vector with %`n` elements that are all 0
, @`zero##` (%`nrow`, %`ncol`) – matrix with %`nrow` \xx %`ncol` elements that are all 0

################################################################################
"`binomialQ`"
© Paul Boersma 2014-02-23, 2023

A function that can be used in @@Formulas@. The complement of the cumulative binomial distribution.

Syntax
======

#`binomialQ` (%`p`, %`k`, %`n`)
:	the probability that in %`n` trials an event with probability %`p` will occur at least %`k` times.

Calculator example
==================

A die is suspected to yield more sixes than a perfect die would do. In order to test this suspicion,
you throw it 1,000 times. The result is 211 sixes.

The probability that a perfect die yields at least 211 sixes is, according to @@Calculator...@,
{
	appendInfoLine: \#{binomialQ} (1/6, 211, 1000)
}
which should be 0.000152.

Script example
==============

You convert 1000 values of pitch targets in Hz to the nearest note on the piano keyboard.
597 of those values turn out to be in the A, B, C, D, E, F, or G regions (the white keys), and 403 values turn out
to be in the A\# , C\# , D\# , F\# , or G\#  regions (the black keys).
Do our subjects have a preference for the white keys?
The following script computes the probability that in the case of no preference the subjects
would target the white keys at least 597 times. This is compared with a %\ci^2 test.
{
	a = 597
	b = 403
	p = 7/12   ; no preference")
	writeInfoLine: “*** Binomial test ”, a, “, ”, b, “, p = ”, fixed$ (p, 6), “ ***”
	pbin = \#{binomialQ} (p, a, a+b)
	appendInfoLine: “P (binomial) = ”, fixed$ (pbin, 6)
	# Chi-square test with Yates correction:
	x2 = (a - 1/2 -   p   * (a+b)) ^ 2 / (  p   * (a+b)) +
	...  (b + 1/2 - (1-p) * (a+b)) ^ 2 / ((1-p) * (a+b))
	px2 = chiSquareQ (x2, 1)
	appendInfoLine: “P (chi-square) = ”, fixed$ (px2, 6)
}
The result is:

	*** Binomial test 597, 403, p = 0.583333 ***
	P (binomial) = 0.199330
	P (chi-square) = 0.398365

The %\ci^2 test is two-sided (it signals a preference for the white or for the black keys),
so it has twice the probability of the binomial test.

We cannot conclude from this test that people have a preference for the white keys.
Of course, we cannot conclude either that people %%don’t% have such a preference.

################################################################################
"`differenceLimensToPhon`"
© Paul Boersma 2002-12-15, 2023

A function for converting intensity difference limens into sensation level,
the inverse of @`phonToDifferenceLimens`.

Formula
=======
~	differenceLimensToPhon (%ndli) = ln (1 + %ndli / 30) / ln (61 / 60)

################################################################################
"`phonToDifferenceLimens`"
© Paul Boersma 2002-12-15, 2023

A function for converting sensation level in phons into intensity difference limen level,
the inverse of @`differenceLimensToPhon`.

Formula
=======
~	phonToDifferenceLimens (%phon) = 30 · ((61/60)^^ %phon^ − 1)

Derivation
==========

In first approximation, humans can detect an intensity difference of 1 phon, i.e.
if two sounds that differ only in intensity are played a short time after each other,
people can generally detect their intensity difference if it is greater than 1 phon.

But the sensitivity is somewhat better for louder sounds.
According to @@Jesteadt, Wier & Green (1977)@, the relative difference limen
of intensity is given by
~	DLI = \De%I / %I = 0.463 · (%I / %I_0)^^−0.072^

In this formula, %I is the intensity of the sound in Watt/m^2, %I_0 is the intensity of
the auditory threshold (i.e. 10^^−12^ Watt/m^2 at 1000 Hz),
and \De%I is the just noticeable difference.

@@Boersma (1998)|Boersma (1998: 109)@ calculates a difference-limen scale from this.
Given an intensity %I, the number of difference limens above threshold is
~	\in__%%I%0_^%I %dx \De%I(%x)
			= (1 / 0.463) \in__%%I%0_^%I %dx %I_0^^−0.072^ %x^^0.072−1^
~	= (1 / (0.463 · 0.072)) ((%I / %I_0)^^0.072^ − 1)

The sensation level in phon is defined as
~	SL = 10 log__10_ (%I / %I_0)

so that the number of difference limens above threshold is
~	(1 / (0.463 · 0.072)) (10^^(0.072 / 10) (10 log (%I / %I_0))^ − 1)
			= 30 · (1.0167^^SL^ − 1)

################################################################################
"`random_initializeSafelyAndUnpredictably`"
© Paul Boersma 2023-06-10

A function xx.

Examples of use:
================
################################################################################
"`random_initializeWithSeedUnsafelyButPredictably`"
© Paul Boersma 2023-06-10

A function xx.

Examples of use:
================
################################################################################
"`randomPoisson`"
© Paul Boersma 2023-06-10

A function xx.

Examples of use:
================
################################################################################
"`randomUniform`"
© Paul Boersma 2023-06-10

A function xx.

Examples of use:
================
################################################################################
"`randomUniform#`"
© Paul Boersma 2023-06-10

A function xx.

Examples of use:
================
################################################################################
"`sort#`"
© Paul Boersma 2023-06-10

A function xx.

Examples of use:
================

################################################################################
"`writeInfoLine`"
© Paul Boersma 2023-06-07

A function that writes its arguments to the Info window,
overwriting what was previously present in the Info window,
and moving the output cursor to the next line.

Examples of use:
================

################################################################################
)~~~"
MAN_PAGES_END

}

/* End of file manual_functions.cpp */
