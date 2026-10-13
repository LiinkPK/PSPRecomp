/* Entry 0x088EB17C | file offset 0x000E8154 | FUN_088eb17c | bytes 288 */

undefined1 FUN_088eb17c(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_088d4c5c();
  fVar3 = param_1[2] + param_1[3];
  fVar2 = *param_1;
  param_1[2] = fVar3;
  if (360.0 <= fVar3) {
    param_1[2] = fVar3 - 360.0;
  }
  else {
    if (0.0 <= fVar3) {
      fVar3 = param_1[4];
      goto LAB_088eb1ec;
    }
    param_1[2] = fVar3 + 360.0;
  }
  fVar3 = param_1[4];
LAB_088eb1ec:
  param_1[4] = fVar3 + param_1[5];
  if ((*(char *)(param_1 + 8) == '\0') && (fVar2 <= (float)iVar1)) {
    FUN_08873d34((float)iVar1,3,FUN_088eb3c4,param_1,0,2);
    local_20 = 0x437f0000;
    local_1c = 0x437f0000;
    local_18 = 0x437f0000;
    local_14 = 0x437f0000;
    FUN_08873db0(&local_20,2);
    *(undefined1 *)(param_1 + 8) = 1;
    fVar2 = *param_1;
  }
  *param_1 = fVar2 - *(float *)(DAT_089d69e0 + 0x18);
  param_1[1] = param_1[1] - *(float *)(DAT_089d69e0 + 0x18);
  return *(undefined1 *)((int)param_1 + 0x21);
}

