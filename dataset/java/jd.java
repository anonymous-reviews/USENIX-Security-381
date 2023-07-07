// Decompiled java functions/methods with their corresponding original source. Tests and library functions were excluded. Decompiled functions are listed first.


/* 1
 *Example 1
 * Project: Mockito
 * Path: Mockito/src/org/mockito/Mockito.java
 */
// Decompiled
public static VerificationAfterDelay after(long millis) {
    return (VerificationAfterDelay)new After(millis, (VerificationMode)VerificationModeFactory.times(1)); // C3.a. Extraneous typecast
}

public static VerificationAfterDelay after(long millis) {
    return new After(millis, VerificationModeFactory.times(1));
}


/* 2
 *Example 4
 * Project: Chart
 * Path: Chart/source/org/jfree/data/xy/DefaultIntervalXYDataset.java
 */
// Decompiled
public boolean equals(Object obj) {
  if (obj == this)
    return true; 
  if (!(obj instanceof DefaultIntervalXYDataset))
    return false; 
  DefaultIntervalXYDataset that = (DefaultIntervalXYDataset)obj;
  if (!this.seriesKeys.equals(that.seriesKeys))
    return false; 
  for (int i = 0; i < this.seriesList.size(); i++) {
    double[][] d1 = this.seriesList.get(i); // C3.b. Missing typecast
    double[][] d2 = that.seriesList.get(i); // C3.b. Missing typecast
    double[] d1x = d1[0];
    double[] d2x = d2[0];
    if (!Arrays.equals(d1x, d2x))
      return false; 
    double[] d1xs = d1[1];
    double[] d2xs = d2[1];
    if (!Arrays.equals(d1xs, d2xs))
      return false; 
    double[] d1xe = d1[2];
    double[] d2xe = d2[2];
    if (!Arrays.equals(d1xe, d2xe))
      return false; 
    double[] d1y = d1[3];
    double[] d2y = d2[3];
    if (!Arrays.equals(d1y, d2y))
      return false; 
    double[] d1ys = d1[4];
    double[] d2ys = d2[4];
    if (!Arrays.equals(d1ys, d2ys))
      return false; 
    double[] d1ye = d1[5];
    double[] d2ye = d2[5];
    if (!Arrays.equals(d1ye, d2ye))
      return false; 
  } 
  return true;
}

public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof DefaultIntervalXYDataset)) {
            return false;
        }
        DefaultIntervalXYDataset that = (DefaultIntervalXYDataset) obj;
        if (!this.seriesKeys.equals(that.seriesKeys)) {
            return false;
        }
        for (int i = 0; i < this.seriesList.size(); i++) {
            double[][] d1 = (double[][]) this.seriesList.get(i);
            double[][] d2 = (double[][]) that.seriesList.get(i);
            double[] d1x = d1[0];
            double[] d2x = d2[0];
            if (!Arrays.equals(d1x, d2x)) {
                return false;
            }
            double[] d1xs = d1[1];
            double[] d2xs = d2[1];
            if (!Arrays.equals(d1xs, d2xs)) {
                return false;
            }
            double[] d1xe = d1[2];
            double[] d2xe = d2[2];
            if (!Arrays.equals(d1xe, d2xe)) {
                return false;
            }
            double[] d1y = d1[3];
            double[] d2y = d2[3];
            if (!Arrays.equals(d1y, d2y)) {
                return false;
            }
            double[] d1ys = d1[4];
            double[] d2ys = d2[4];
            if (!Arrays.equals(d1ys, d2ys)) {
                return false;
            }
            double[] d1ye = d1[5];
            double[] d2ye = d2[5];
            if (!Arrays.equals(d1ye, d2ye)) {
                return false;
            }
        }
        return true;
    }

/* 3
 *Example 9
 * Project: Time
 * Path: Time/src/main/java/org/joda/time/format/DateTimeFormatterBuilder.java
 */
// Decompiled
private long[] getFractionData(long fraction, DateTimeField field) {
  long scalar, rangeMillis = field.getDurationField().getUnitMillis();
  int maxDigits = this.iMaxDigits;
  while (true) {
    switch (maxDigits) {
      default:
        scalar = 1L;
        break;
      case 1:
        scalar = 10L;
        break;
      case 2:
        scalar = 100L;
        break;
      case 3:
        scalar = 1000L;
        break;
      case 4:
        scalar = 10000L;
        break;
      case 5:
        scalar = 100000L;
        break;
      case 6:
        scalar = 1000000L;
        break;
      case 7:
        scalar = 10000000L;
        break;
      case 8:
        scalar = 100000000L;
        break;
      case 9:
        scalar = 1000000000L;
        break;
      case 10:
        scalar = 10000000000L;
        break;
      case 11:
        scalar = 100000000000L;
        break;
      case 12:
        scalar = 1000000000000L;
        break;
      case 13:
        scalar = 10000000000000L;
        break;
      case 14:
        scalar = 100000000000000L;
        break;
      case 15:
        scalar = 1000000000000000L;
        break;
      case 16:
        scalar = 10000000000000000L;
        break;
      case 17:
        scalar = 100000000000000000L;
        break;
      case 18:
        scalar = 1000000000000000000L;
        break;
    } 
    if (rangeMillis * scalar / scalar == rangeMillis)
      break; 
    maxDigits--;
  } 
  return new long[] { fraction * scalar / rangeMillis, maxDigits };
}

private long[] getFractionData(long fraction, DateTimeField field) {
    long rangeMillis = field.getDurationField().getUnitMillis();
    long scalar;
    int maxDigits = iMaxDigits;
    while (true) {
        switch (maxDigits) {
        default: scalar = 1L; break;
        case 1:  scalar = 10L; break;
        case 2:  scalar = 100L; break;
        case 3:  scalar = 1000L; break;
        case 4:  scalar = 10000L; break;
        case 5:  scalar = 100000L; break;
        case 6:  scalar = 1000000L; break;
        case 7:  scalar = 10000000L; break;
        case 8:  scalar = 100000000L; break;
        case 9:  scalar = 1000000000L; break;
        case 10: scalar = 10000000000L; break;
        case 11: scalar = 100000000000L; break;
        case 12: scalar = 1000000000000L; break;
        case 13: scalar = 10000000000000L; break;
        case 14: scalar = 100000000000000L; break;
        case 15: scalar = 1000000000000000L; break;
        case 16: scalar = 10000000000000000L; break;
        case 17: scalar = 100000000000000000L; break;
        case 18: scalar = 1000000000000000000L; break;
        }
        if (((rangeMillis * scalar) / scalar) == rangeMillis) {
            break;
        }
        // Overflowed: scale down.
        maxDigits--;
    }
    
    return new long[] {fraction * scalar / rangeMillis, maxDigits};
}


/* 4
 *Example 10
 * Project: Time
 * Path: Time/src/main/java/org/joda/time/MonthDay.java
 */     
// Decompiled
public MonthDay addWrapFieldToCopy(int valueToAdd) {
    int[] newValues = this.iBase.getValues();
    newValues = getField().addWrapField(this.iBase, this.iFieldIndex, newValues, valueToAdd); // C4. Nonequivalent expression .addWrapField is not add
    return new MonthDay(this.iBase, newValues);
}

public MonthDay addToCopy(int valueToAdd) {
    int[] newValues = iBase.getValues();
    newValues = getField().add(iBase, iFieldIndex, newValues, valueToAdd);
    return new MonthDay(iBase, newValues);
}


/* 5
 *Example 12
 * Project: Math
 * Path: Math/src/main/java/org/apache/commons/math3/linear/Array2DRowFieldMatrix.java
 */
// Decompiled
public T[] preMultiply(T[] v) throws DimensionMismatchException {
  int nRows = getRowDimension();
  int nCols = getColumnDimension();
  if (v.length != nRows)
    throw new DimensionMismatchException(v.length, nRows); 
  FieldElement[] arrayOfFieldElement = (FieldElement[])MathArrays.buildArray(getField(), nCols); // C3.a. Extraneous typecast
  for (int col = 0; col < nCols; col++) {
    FieldElement fieldElement = (FieldElement)getField().getZero(); // C3.a. Extraneous typecast
    for (int i = 0; i < nRows; i++)
      fieldElement = (FieldElement)fieldElement.add(this.data[i][col].multiply(v[i])); // C3.a. Extraneous typecast
    arrayOfFieldElement[col] = fieldElement;
  } 
  return (T[])arrayOfFieldElement; // C3.a. Extraneous typecast
}

@Override
public T[] preMultiply(final T[] v) throws DimensionMismatchException {
    final int nRows = getRowDimension();
    final int nCols = getColumnDimension();
    if (v.length != nRows) {
        throw new DimensionMismatchException(v.length, nRows);
    }

    final T[] out = MathArrays.buildArray(getField(), nCols);
    for (int col = 0; col < nCols; ++col) {
        T sum = getField().getZero();
        for (int i = 0; i < nRows; ++i) {
            sum = sum.add(data[i][col].multiply(v[i]));
        }
        out[col] = sum;
    }

    return out;
}


/* 6
 *Example 13
 * Project: Time
 * Path: Time/src/main/java/org/joda/time/field/UnsupportedDateTimeField.java
 */
// Decompiled
public long addWrapField(long instant, int value) {
  throw unsupported();
}

public long addWrapField(long instant, int value) {
    throw unsupported();
}



/* 7
 *Example 18
 * Project: Chart
 * Path: Chart/source/org/jfree/chart/plot/CategoryPlot.java
 */
// Decompiled   
public void addRangeMarker(int index, Marker marker, Layer layer, boolean notify) {
  if (layer == Layer.FOREGROUND) {
      // C4. Nonequivalent expression: Declaring markers in this scope (and below) is not equivalent to declaring it in the outer scope.
    Collection markers = (Collection)this.foregroundRangeMarkers.get(new Integer(index));
    if (markers == null) {
      markers = new ArrayList();
      this.foregroundRangeMarkers.put(new Integer(index), markers);
    } 
    markers.add(marker);
  } else if (layer == Layer.BACKGROUND) {
    // C4. Nonequivalent expression: Declaring markers in this scope (and above) is not equivalent to declaring it in the outer scope.
    Collection markers = (Collection)this.backgroundRangeMarkers.get(new Integer(index));
    if (markers == null) {
      markers = new ArrayList();
      this.backgroundRangeMarkers.put(new Integer(index), markers);
    } 
    markers.add(marker);
  } 
  marker.addChangeListener(this);
  if (notify)
    fireChangeEvent(); 
}

public void addRangeMarker(int index, Marker marker, Layer layer,
            boolean notify) {
    Collection markers;
    if (layer == Layer.FOREGROUND) {
        markers = (Collection) this.foregroundRangeMarkers.get(
                new Integer(index));
        if (markers == null) {
            markers = new java.util.ArrayList();
            this.foregroundRangeMarkers.put(new Integer(index), markers);
        }
        markers.add(marker);
    }
    else if (layer == Layer.BACKGROUND) {
        markers = (Collection) this.backgroundRangeMarkers.get(
                new Integer(index));
        if (markers == null) {
            markers = new java.util.ArrayList();
            this.backgroundRangeMarkers.put(new Integer(index), markers);
        }
        markers.add(marker);
    }
    marker.addChangeListener(this);
    if (notify) {
        fireChangeEvent();
    }
}


/* 8
 *Example 19
 * Project: Closure
 * Path: Closure/src/com/google/javascript/jscomp/AliasStrings.java
 */
// Decompiled
private static boolean shouldReplaceWithAlias(String str, StringInfo info) {
  if (info.numOccurrences > info.numOccurrencesInfrequentlyExecuted)
    return true; 
  int sizeOfLiteral = 2 + str.length();
  int sizeOfStrings = info.numOccurrences * sizeOfLiteral;
  int sizeOfVariable = 3;
  int sizeOfAliases = 6 + sizeOfVariable + sizeOfLiteral + info.numOccurrences * sizeOfVariable;
  return (sizeOfAliases < sizeOfStrings);
}

private static boolean shouldReplaceWithAlias(String str, StringInfo info) {
    // Optimize for application performance.  If there are any uses of the
    // string that are not 'infrequent uses', assume they are frequent and
    // create an alias.
    if (info.numOccurrences > info.numOccurrencesInfrequentlyExecuted) {
      return true;
    }

    // Optimize for code size.  Are aliases smaller than strings?
    //
    // This logic optimizes for the size of uncompressed code, but it tends to
    // get good results for the size of the gzipped code too.
    //
    // gzip actually prefers that strings are not aliased - it compresses N
    // string literals better than 1 string literal and N+1 short variable
    // names, provided each string is within 32k of the previous copy.  We
    // follow the uncompressed logic as insurance against there being multiple
    // strings more than 32k apart.

    int sizeOfLiteral = 2 + str.length();
    int sizeOfStrings = info.numOccurrences * sizeOfLiteral;
    int sizeOfVariable = 3;
    //  '6' comes from: 'var =;' in var XXX="...";
    int sizeOfAliases = 6 + sizeOfVariable + sizeOfLiteral    // declaration
        + info.numOccurrences * sizeOfVariable;               // + uses

    return sizeOfAliases < sizeOfStrings;
}


/* 9
 *Example 20
 * Project: Chart
 * Path: Chart/source/org/jfree/chart/plot/dial/DialTextAnnotation.java
 */
// Decompiled
public void setAngle(double angle) {
    this.angle = angle;
    notifyListeners(new DialLayerChangeEvent(this));
}

public void setAngle(double angle) {
    this.angle = angle;
    notifyListeners(new DialLayerChangeEvent(this));
}


/* 10
 *Example 22
 * Project: Chart
 * Path: Chart/source/org/jfree/chart/renderer/xy/StackedXYAreaRenderer2.java
 */
    // Decompiled
private double[] averageStackValues(double[] stack1, double[] stack2) {
    double[] result = new double[2];
    result[0] = (stack1[0] + stack2[0]) / 2.0D;
    result[1] = (stack1[1] + stack2[1]) / 2.0D;
    return result;
}

private double[] averageStackValues(double[] stack1, double[] stack2) {
    double[] result = new double[2];
    result[0] = (stack1[0] + stack2[0]) / 2.0;
    result[1] = (stack1[1] + stack2[1]) / 2.0;
    return result;
}



/* 11
 *Example 26
 * Project: Collections
 * Path: Collections/src/main/java/org/apache/commons/collections4/map/ReferenceIdentityMap.java
 */
// Decompiled
protected boolean isEqualKey(Object key1, Object key2) {
    key2 = isKeyType(AbstractReferenceMap.ReferenceStrength.HARD) ? key2 : ((Reference)key2).get();
    return (key1 == key2);
}

@Override
protected boolean isEqualKey(final Object key1, Object key2) {
    key2 = isKeyType(ReferenceStrength.HARD) ? key2 : ((Reference<?>) key2).get();
    return key1 == key2;
}


/* 12
 *Example 27
 * Project: Lang
 * Path: Lang/src/main/java/org/apache/commons/lang3/Range.java
 */
// Decompiled
public boolean isBeforeRange(Range<T> otherRange) {
  if (otherRange == null)
    return false; 
  return isBefore(otherRange.minimum);
}

public boolean isBeforeRange(final Range<T> otherRange) {
    if (otherRange == null) {
        return false;
    }
    return isBefore(otherRange.minimum);
}


/* 13
 *Example 28
 * Project: JacksonDatabind
 * Path: JacksonDatabind/src/main/java/com/fasterxml/jackson/databind/node/BigIntegerNode.java
 */
// Decompiled
public boolean isBigInteger() {
    return true;
}

@Override
public boolean isBigInteger() { return true; }


/* 14
 *Example 29
 * Project: Collections
 * Path: Collections/src/main/java/org/apache/commons/collections4/map/UnmodifiableOrderedMap.java
 */  
// Decompiled
public void putAll(Map<? extends K, ? extends V> mapToCopy) {
    throw new UnsupportedOperationException();
}

@Override
public void putAll(final Map<? extends K, ? extends V> mapToCopy) {
    throw new UnsupportedOperationException();
}



/* 15
 *Example 31
 * Project: Closure
 * Path: Closure/src/com/google/javascript/jscomp/CompilerOptions.java
 */
// Decompiled
public void setIgnoreCajaProperties(boolean enabled) {
    this.ignoreCajaProperties = enabled;
}

public void setIgnoreCajaProperties(boolean enabled) {
    ignoreCajaProperties = enabled;
}


/* 16
 *Example 36
 * Project: Chart
 * Path: Chart/source/org/jfree/chart/axis/ModuloAxis.java
 */
// Decompiled
public double getDisplayStart() {
    return this.displayStart;
}
  
public double getDisplayStart() {
    return this.displayStart;
}


/* 17
 *Example 37
 * Project: Lang
 * Path: Lang/src/main/java/org/apache/commons/lang3/mutable/MutableDouble.java
 */
// Decompiled
public long longValue() {
    return (long)this.value;
}

@Override
public long longValue() {
    return (long) value;
}


/* 18
 *Example 38
 * Project: Mockito
 * Path: Mockito/src/org/mockito/Mockito.java
 */
// Decompiled
static MockitoDebugger debug() {
  return (MockitoDebugger)new MockitoDebuggerImpl(); // C3.a. Extraneous typecast
}

@Deprecated
static MockitoDebugger debug() {
    return new MockitoDebuggerImpl();
}


/* 19
 *Example 39
 * Project: Closure
 * Path: Closure/gen/com/google/javascript/jscomp/Instrumentation.java
 */
// Decompiled  
public List<String> getInitList() {
    return Collections.unmodifiableList((List<? extends String>)this.init_); // C3.a. Extraneous typecast
}

public java.util.List<String> getInitList() {
    return java.util.Collections.unmodifiableList(init_);
}


/* 20
 *Example 40
 * Project: Chart
 * Path: Chart/source/org/jfree/chart/annotations/CategoryPointerAnnotation.java
 */
// Decompiler  
public Object clone() throws CloneNotSupportedException {
    return super.clone();
}

public Object clone() throws CloneNotSupportedException {
    return super.clone();
}


/* 21
 *Example 42
 * Project: Math
 * Path: Math/src/main/java/org/apache/commons/math3/analysis/differentiation/DerivativeStructure.java
 */ 
// Decompiled
public DerivativeStructure linearCombination(DerivativeStructure[] a, DerivativeStructure[] b) throws DimensionMismatchException {
  double[] aDouble = new double[a.length];
  for (int i = 0; i < a.length; i++)
    aDouble[i] = a[i].getValue(); 
  double[] bDouble = new double[b.length];
  for (int j = 0; j < b.length; j++)
    bDouble[j] = b[j].getValue(); 
  double accurateValue = MathArrays.linearCombination(aDouble, bDouble);
  DerivativeStructure simpleValue = (DerivativeStructure)a[0].getField().getZero(); // C3.a. Extraneous typecast
  for (int k = 0; k < a.length; k++)
    simpleValue = simpleValue.add(a[k].multiply(b[k])); 
  double[] all = simpleValue.getAllDerivatives();
  all[0] = accurateValue;
  return new DerivativeStructure(simpleValue.getFreeParameters(), simpleValue.getOrder(), all);
}

public DerivativeStructure linearCombination(final DerivativeStructure[] a, final DerivativeStructure[] b)
    throws DimensionMismatchException {

    // compute an accurate value, taking care of cancellations
    final double[] aDouble = new double[a.length];
    for (int i = 0; i < a.length; ++i) {
        aDouble[i] = a[i].getValue();
    }
    final double[] bDouble = new double[b.length];
    for (int i = 0; i < b.length; ++i) {
        bDouble[i] = b[i].getValue();
    }
    final double accurateValue = MathArrays.linearCombination(aDouble, bDouble);

    // compute a simple value, with all partial derivatives
    DerivativeStructure simpleValue = a[0].getField().getZero();
    for (int i = 0; i < a.length; ++i) {
        simpleValue = simpleValue.add(a[i].multiply(b[i]));
    }

    // create a result with accurate value and all derivatives (not necessarily as accurate as the value)
    final double[] all = simpleValue.getAllDerivatives();
    all[0] = accurateValue;
    return new DerivativeStructure(simpleValue.getFreeParameters(), simpleValue.getOrder(), all);

}


/* 22
 *Example 43
 * Project: JacksonDatabind
 * Path: JacksonDatabind/src/main/java/com/fasterxml/jackson/databind/jsontype/impl/AsExternalTypeSerializer.java
 */  
// Decompilers
public void writeCustomTypeSuffixForArray(Object value, JsonGenerator jgen, String typeId) throws IOException, JsonProcessingException {
    _writeArraySuffix(value, jgen, typeId);
}

@Override
public void writeCustomTypeSuffixForArray(Object value, JsonGenerator jgen, String typeId)
       throws IOException, JsonProcessingException {
   _writeArraySuffix(value, jgen, typeId);
}


/* 23
 *Example 45
 * Project: Chart
 * Path: Chart/source/org/jfree/chart/renderer/xy/XYLineAndShapeRenderer.java
 */
// Decompiled
protected boolean isItemPass(int pass) {
    return (pass == 1);
}

protected boolean isItemPass(int pass) {
    return pass == 1;
}


/* 24
 *Example 50
 * Project: Math
 * Path: Math/src/main/java/org/apache/commons/math3/optimization/linear/SimplexTableau.java
 */  
// Decompiled
protected RealMatrix createTableau(boolean maximize) {
  int width = this.numDecisionVariables + this.numSlackVariables + this.numArtificialVariables + getNumObjectiveFunctions() + 1;
  int height = this.constraints.size() + getNumObjectiveFunctions();
  Array2DRowRealMatrix matrix = new Array2DRowRealMatrix(height, width);
  if (getNumObjectiveFunctions() == 2)
    matrix.setEntry(0, 0, -1.0D); 
  int zIndex = (getNumObjectiveFunctions() == 1) ? 0 : 1;
  matrix.setEntry(zIndex, zIndex, maximize ? 1.0D : -1.0D);
  RealVector objectiveCoefficients = maximize ? this.f.getCoefficients().mapMultiply(-1.0D) : this.f.getCoefficients();
  copyArray(objectiveCoefficients.toArray(), matrix.getDataRef()[zIndex]);
  matrix.setEntry(zIndex, width - 1, maximize ? this.f.getConstantTerm() : (-1.0D * this.f.getConstantTerm()));
  if (!this.restrictToNonNegative)
    matrix.setEntry(zIndex, getSlackVariableOffset() - 1, getInvertedCoefficientSum(objectiveCoefficients)); 
  int slackVar = 0;
  int artificialVar = 0;
  for (int i = 0; i < this.constraints.size(); i++) {
    LinearConstraint constraint = this.constraints.get(i);
    int row = getNumObjectiveFunctions() + i;
    copyArray(constraint.getCoefficients().toArray(), matrix.getDataRef()[row]);
    if (!this.restrictToNonNegative)
      matrix.setEntry(row, getSlackVariableOffset() - 1, getInvertedCoefficientSum(constraint.getCoefficients())); 
    matrix.setEntry(row, width - 1, constraint.getValue());
    if (constraint.getRelationship() == Relationship.LEQ) {
      matrix.setEntry(row, getSlackVariableOffset() + slackVar++, 1.0D);
    } else if (constraint.getRelationship() == Relationship.GEQ) {
      matrix.setEntry(row, getSlackVariableOffset() + slackVar++, -1.0D);
    } 
    if (constraint.getRelationship() == Relationship.EQ || constraint.getRelationship() == Relationship.GEQ) {
      matrix.setEntry(0, getArtificialVariableOffset() + artificialVar, 1.0D);
      matrix.setEntry(row, getArtificialVariableOffset() + artificialVar++, 1.0D);
      matrix.setRowVector(0, matrix.getRowVector(0).subtract(matrix.getRowVector(row)));
    } 
  } 
  return (RealMatrix)matrix; // C3.a. Extraneous typecast
}

protected RealMatrix createTableau(final boolean maximize) {

    // create a matrix of the correct size
    int width = numDecisionVariables + numSlackVariables +
    numArtificialVariables + getNumObjectiveFunctions() + 1; // + 1 is for RHS
    int height = constraints.size() + getNumObjectiveFunctions();
    Array2DRowRealMatrix matrix = new Array2DRowRealMatrix(height, width);

    // initialize the objective function rows
    if (getNumObjectiveFunctions() == 2) {
        matrix.setEntry(0, 0, -1);
    }
    int zIndex = (getNumObjectiveFunctions() == 1) ? 0 : 1;
    matrix.setEntry(zIndex, zIndex, maximize ? 1 : -1);
    RealVector objectiveCoefficients =
        maximize ? f.getCoefficients().mapMultiply(-1) : f.getCoefficients();
    copyArray(objectiveCoefficients.toArray(), matrix.getDataRef()[zIndex]);
    matrix.setEntry(zIndex, width - 1,
        maximize ? f.getConstantTerm() : -1 * f.getConstantTerm());

    if (!restrictToNonNegative) {
        matrix.setEntry(zIndex, getSlackVariableOffset() - 1,
            getInvertedCoefficientSum(objectiveCoefficients));
    }

    // initialize the constraint rows
    int slackVar = 0;
    int artificialVar = 0;
    for (int i = 0; i < constraints.size(); i++) {
        LinearConstraint constraint = constraints.get(i);
        int row = getNumObjectiveFunctions() + i;

        // decision variable coefficients
        copyArray(constraint.getCoefficients().toArray(), matrix.getDataRef()[row]);

        // x-
        if (!restrictToNonNegative) {
            matrix.setEntry(row, getSlackVariableOffset() - 1,
                getInvertedCoefficientSum(constraint.getCoefficients()));
        }

        // RHS
        matrix.setEntry(row, width - 1, constraint.getValue());

        // slack variables
        if (constraint.getRelationship() == Relationship.LEQ) {
            matrix.setEntry(row, getSlackVariableOffset() + slackVar++, 1);  // slack
        } else if (constraint.getRelationship() == Relationship.GEQ) {
            matrix.setEntry(row, getSlackVariableOffset() + slackVar++, -1); // excess
        }

        // artificial variables
        if ((constraint.getRelationship() == Relationship.EQ) ||
                (constraint.getRelationship() == Relationship.GEQ)) {
            matrix.setEntry(0, getArtificialVariableOffset() + artificialVar, 1);
            matrix.setEntry(row, getArtificialVariableOffset() + artificialVar++, 1);
            matrix.setRowVector(0, matrix.getRowVector(0).subtract(matrix.getRowVector(row)));
        }
    }

    return matrix;
}


/* 25
 *Example 55
 * Project: JacksonXml
 * Path: JacksonXml/src/main/java/com/fasterxml/jackson/dataformat/xml/XmlAnnotationIntrospector.java
 */  
// Decompiled
public Boolean isOutputAsAttribute(Annotated ann) {
  return this._intr.isOutputAsAttribute(ann);
}

@Override
public Boolean isOutputAsAttribute(Annotated ann) {
    return _intr.isOutputAsAttribute(ann);
}