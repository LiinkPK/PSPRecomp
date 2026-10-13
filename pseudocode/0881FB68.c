/* Entry 0x0881FB68 | file offset 0x0001CB40 | FUN_0881fb68 | bytes 164 */

undefined4 FUN_0881fb68(int param_1,char param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(char *)(param_1 + 0x24) != param_2) {
      fVar4 = *(float *)(param_1 + 0x28);
      fVar3 = *(float *)(param_1 + 0x2c);
      if (param_2 == '\x01') {
        fVar2 = (float)FUN_0881fd0c(param_1);
      }
      else {
        fVar2 = (float)FUN_0881fd30(param_1);
      }
      *(char *)(param_1 + 0x24) = param_2;
      *(float *)(param_1 + 0x2c) = fVar2;
      *(float *)(param_1 + 0x28) = fVar2 * (1.0 - fVar4 / fVar3);
    }
    uVar1 = 0;
  }
  return uVar1;
}

