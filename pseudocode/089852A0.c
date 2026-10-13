/* Entry 0x089852A0 | file offset 0x00182278 | FUN_089852a0 | bytes 276 */

void FUN_089852a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = FUN_08985250(param_3,param_1);
  if (*(char *)(iVar1 + 0x5e) != '\0') {
    uVar2 = (uint)*(ushort *)(param_2 + 0x32);
    fVar4 = 1.0;
    if (uVar2 < *(byte *)(iVar1 + 0x60)) {
      fVar3 = (float)*(byte *)(iVar1 + 0x60);
      if (fVar3 != 0.0) {
        fVar4 = (1.0 / fVar3) * (float)uVar2;
      }
      *(float *)(param_2 + 0x34) = fVar4;
    }
    else {
      uVar2 = *(ushort *)(param_2 + 0x30) - uVar2;
      if (uVar2 < *(byte *)(iVar1 + 0x5f)) {
        fVar4 = (float)*(byte *)(iVar1 + 0x5f);
        if (fVar4 == 0.0) {
          fVar3 = 1.0;
        }
        else {
          fVar3 = (float)(int)uVar2;
          if ((int)uVar2 < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          fVar3 = (1.0 / fVar4) * fVar3;
        }
        *(float *)(param_2 + 0x34) = fVar3;
        if (1.0 < fVar3) {
          *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
      }
    }
  }
  return;
}

