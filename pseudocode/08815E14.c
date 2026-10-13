/* Entry 0x08815E14 | file offset 0x00012DEC | FUN_08815e14 | bytes 340 */

void FUN_08815e14(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = FUN_08835134(param_1,8,0);
  if (iVar1 != 0) {
    iVar2 = FUN_08842100(0x40);
    *(int *)(param_1 + 0x5f8) = iVar2;
    if (iVar2 != 0) {
      FUN_08812664(iVar2 + 0x20,param_1,iVar1);
      pfVar3 = *(float **)(param_1 + 0x5f8);
      fVar4 = pfVar3[0xc];
      fVar5 = pfVar3[0xd];
      fVar6 = pfVar3[0xe];
      fVar7 = pfVar3[9];
      fVar8 = pfVar3[10];
      *pfVar3 = fVar4 - fVar7;
      *(float *)(*(int *)(param_1 + 0x5f8) + 4) = fVar5;
      *(float *)(*(int *)(param_1 + 0x5f8) + 8) = fVar6 - fVar7;
      *(float *)(*(int *)(param_1 + 0x5f8) + 0x10) = fVar4 + fVar7;
      *(float *)(*(int *)(param_1 + 0x5f8) + 0x14) = fVar5 + fVar8;
      *(float *)(*(int *)(param_1 + 0x5f8) + 0x18) = fVar6 + fVar7;
    }
  }
  return;
}

