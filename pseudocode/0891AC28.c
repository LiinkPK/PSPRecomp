/* Entry 0x0891AC28 | file offset 0x00117C00 | FUN_0891ac28 | bytes 160 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089ce62c. Boundary still requires runtime validation. */

void FUN_0891ac28(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = param_1 + 4;
  *param_2 = 0;
  param_2[1] = 1;
  iVar7 = 0;
  puVar4 = param_2 + 0x68;
  puVar5 = param_2;
  do {
    *(undefined4 *)(puVar5 + 0x48) = 1;
    iVar1 = 0;
    iVar8 = 0x5d;
    do {
      uVar2 = ((undefined4 *)(iVar3 + iVar1))[1];
      *(undefined4 *)(puVar4 + iVar1) = *(undefined4 *)(iVar3 + iVar1);
      *(undefined4 *)((int)(puVar4 + iVar1) + 4) = uVar2;
      iVar8 = iVar8 + -1;
      iVar1 = iVar1 + 8;
    } while (iVar8 != 0);
    iVar7 = iVar7 + 1;
    puVar5 = puVar5 + 0xea8;
    puVar4 = puVar4 + 0xea8;
    iVar3 = iVar3 + 0x2e8;
  } while (iVar7 < 2);
  iVar7 = 0;
  iVar3 = 0x2d;
  do {
    puVar6 = (undefined4 *)(param_1 + 0x5d4 + iVar7);
    uVar2 = puVar6[1];
    *(undefined4 *)(param_2 + iVar7 + 0x1d98) = *puVar6;
    *(undefined4 *)((int)(param_2 + iVar7 + 0x1d98) + 4) = uVar2;
    iVar3 = iVar3 + -1;
    iVar7 = iVar7 + 8;
  } while (iVar3 != 0);
  return;
}

