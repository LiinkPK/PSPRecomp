/* Entry 0x088370FC | file offset 0x000340D4 | FUN_088370fc | bytes 40 */

float FUN_088370fc(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x3a0);
  if (iVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(iVar1 + 0xc) + *(float *)(iVar1 + 0x14);
  }
  return fVar2;
}

