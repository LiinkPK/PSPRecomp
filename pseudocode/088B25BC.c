/* Entry 0x088B25BC | file offset 0x000AF594 | FUN_088b25bc | bytes 212 */

float FUN_088b25bc(float param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                  char param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  if (param_2 != 0) {
    fVar2 = (float)FUN_088b2690(*(undefined4 *)(param_2 + 0x1c),param_4,
                                (int)*(short *)(param_2 + 0x1a));
    fVar1 = (float)(param_5 + 100);
    if ((int)DAT_089d72ac[7] < param_5 + 100) {
      fVar1 = DAT_089d72ac[7];
    }
    param_1 = fVar2 * (float)(int)fVar1 * 0.01 * param_1;
    if (param_6 == '\x01') {
      param_1 = param_1 * DAT_089d72ac[8];
    }
    fVar1 = *DAT_089d72ac;
    if ((*DAT_089d72ac <= param_1) && (fVar1 = DAT_089d72ac[1], param_1 <= DAT_089d72ac[1])) {
      fVar1 = param_1;
    }
  }
  return fVar1;
}

