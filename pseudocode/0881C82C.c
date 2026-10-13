/* Entry 0x0881C82C | file offset 0x00019804 | FUN_0881c82c | bytes 268 */

undefined4 FUN_0881c82c(float param_1,float param_2,char *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  
  if (*param_3 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_4 < *(uint *)(DAT_089d4910 + 0xc)) {
    if (param_3[8] == '\x01') {
      uVar1 = 0;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(DAT_089d4910 + 0x10) + param_4 * 0x14);
      if ((float)puVar2[4] <= param_2) {
        fVar3 = (float)puVar2[3];
        if (fVar3 == 0.0) {
          uVar1 = 0;
        }
        else if (fVar3 < param_1) {
          uVar1 = 0;
        }
        else {
          fVar3 = 1.0 - param_1 / fVar3;
          FUN_088749a0((float)puVar2[1] * fVar3 * 0.01,(float)puVar2[2] * fVar3 * 0.01,*puVar2,0);
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

