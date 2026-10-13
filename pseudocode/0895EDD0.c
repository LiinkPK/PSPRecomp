/* Entry 0x0895EDD0 | file offset 0x0015BDA8 | FUN_0895edd0 | bytes 92 */

void FUN_0895edd0(float param_1,int param_2,int param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  pfVar3 = (float *)(param_3 + 0x20);
  pfVar2 = (float *)(param_3 + 0x10);
  uVar1 = 0;
  do {
    fVar5 = *pfVar3;
    fVar4 = *pfVar2;
    uVar1 = uVar1 + 1;
    pfVar3 = pfVar3 + 1;
    pfVar2 = pfVar2 + 1;
    *(float *)(param_2 + 4) =
         fVar5 * param_1 * 0.5 * param_1 + fVar4 * param_1 + *(float *)(param_2 + 0xc);
    param_2 = param_2 + 4;
  } while (uVar1 < 2);
  return;
}

