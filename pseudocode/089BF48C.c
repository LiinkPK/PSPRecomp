/* Entry 0x089BF48C | file offset 0x001BC464 | FUN_089bf48c | bytes 540 */

void FUN_089bf48c(undefined4 *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  
  iVar4 = FUN_089bef1c(param_2,4,0);
  iVar5 = FUN_089bef1c(param_2,5,0);
  if (iVar4 == 0) {
LAB_089bf680:
    bVar3 = false;
    if (iVar5 == 0) goto LAB_089bf688;
LAB_089bf528:
    FUN_089bb5f8(1,*param_1);
    FUN_089bf408(param_1,iVar5,0x10);
    if (*(ushort *)(*(int *)(iVar5 + 0xc) + iVar5 + 0x2e) < 2) goto LAB_089bf688;
    bVar3 = true;
LAB_089bf560:
    iVar4 = *(int *)(param_2 + 4);
  }
  else {
    bVar3 = true;
    FUN_089bb59c(1,*param_1);
    FUN_089bf408(param_1,iVar4,0x80);
    if (*(ushort *)(*(int *)(iVar4 + 0xc) + iVar4 + 0x2e) < 2) goto LAB_089bf680;
    if (iVar5 != 0) goto LAB_089bf528;
LAB_089bf688:
    if (bVar3) goto LAB_089bf560;
    FUN_089baa90(*param_1,1,4,0x80);
    iVar4 = *(int *)(param_2 + 4);
  }
  psVar7 = (short *)(iVar4 + param_2);
  psVar6 = (short *)(param_2 + *(int *)(param_2 + 8));
  iVar4 = 0;
  if (psVar6 < psVar7) {
    do {
      sVar1 = *psVar6;
      while (sVar1 == 6) {
        iVar5 = *(int *)(psVar6 + 6);
        iVar4 = iVar4 + 1;
        uVar2 = *(ushort *)((int)psVar6 + iVar5 + 0xe);
        FUN_089baa90(*param_1,0,4,(uint)*(ushort *)((int)psVar6 + iVar5 + 0xc) << 2);
        FUN_089baa90(*param_1,0,4,(uint)uVar2 << 3);
        FUN_089baa90(*param_1,0,4,
                     *(int *)((int)psVar6 + iVar5 + 0x1c) - *(int *)((int)psVar6 + iVar5 + 0x18));
        psVar6 = (short *)(*(int *)(psVar6 + 2) + (int)psVar6);
        if (psVar7 <= psVar6) goto LAB_089bf60c;
        sVar1 = *psVar6;
      }
      psVar6 = (short *)(*(int *)(psVar6 + 2) + (int)psVar6);
    } while (psVar6 < psVar7);
LAB_089bf60c:
    if (iVar4 != 0) goto LAB_089bf614;
  }
  if (!bVar3) {
    FUN_089bb56c(0,*param_1);
    return;
  }
LAB_089bf614:
  FUN_089bb56c(iVar4 + 1,*param_1);
  return;
}

