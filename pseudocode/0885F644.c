/* Entry 0x0885F644 | file offset 0x0005C61C | FUN_0885f644 | bytes 228 */

void FUN_0885f644(undefined4 param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  
  pfVar1 = (float *)(param_3 + 0x30);
  FUN_089a3528(auStack_30,param_2,param_3);
  FUN_089a34c0(param_1,param_3);
  iVar2 = 0;
  do {
    param_3 = param_3 + 0xc;
    fVar3 = (float)FUN_089a3718(auStack_30,param_3);
    fVar4 = *pfVar1;
    fVar5 = -fVar4;
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    FUN_089a3680(fVar5,auStack_24,param_3);
    FUN_089a34f4(param_1,param_1,auStack_24);
    iVar2 = iVar2 + 1;
    pfVar1 = pfVar1 + 1;
  } while (iVar2 < 3);
  return;
}

