/* Entry 0x088B24B8 | file offset 0x000AF490 | FUN_088b24b8 | bytes 260 */

float FUN_088b24b8(float param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,char param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = 0.0;
  if (param_2 != 0) {
    fVar2 = (float)FUN_088b2690(*(undefined4 *)(param_2 + 0x1c),param_4,
                                (int)*(short *)(param_2 + 0x1a));
    fVar3 = (float)FUN_088b26f0(param_5,(int)*(char *)(param_2 + 0x19));
    fVar1 = (float)(param_6 + 100);
    if ((int)DAT_089d72ac[7] < param_6 + 100) {
      fVar1 = DAT_089d72ac[7];
    }
    param_1 = (fVar3 + fVar2) * (float)(int)fVar1 * 0.01 * param_1;
    if (param_7 == '\x01') {
      param_1 = param_1 * DAT_089d72ac[8];
    }
    fVar1 = *DAT_089d72ac;
    if ((*DAT_089d72ac <= param_1) && (fVar1 = DAT_089d72ac[1], param_1 <= DAT_089d72ac[1])) {
      fVar1 = param_1;
    }
  }
  return fVar1;
}

