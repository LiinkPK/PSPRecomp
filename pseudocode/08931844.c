/* Entry 0x08931844 | file offset 0x0012E81C | FUN_08931844 | bytes 196 */

void FUN_08931844(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  if (0.0 <= *(float *)(param_1 + 0x2c8)) {
    if (*(float *)(param_1 + 0x2c8) <= *(float *)(param_1 + 0x2c4)) {
      FUN_08931908(param_1);
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
    else {
      FUN_088d3f00(0,param_1 + 0x34,&DAT_089cf1cc);
      iVar2 = 0;
      fVar3 = *(float *)(param_1 + 0x2c4);
      iVar1 = param_1 + 0x38;
      do {
        FUN_0893047c(fVar3 / *(float *)(param_1 + 0x2c8),iVar1);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x5c;
        fVar3 = *(float *)(param_1 + 0x2c4);
      } while (iVar2 < 6);
      *(float *)(param_1 + 0x2c4) = fVar3 + 1.0;
    }
  }
  return;
}

