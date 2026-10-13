/* Entry 0x08906034 | file offset 0x0010300C | FUN_08906034 | bytes 264 */

undefined4 FUN_08906034(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_30 [6];
  undefined1 auStack_2a [2];
  undefined1 auStack_28 [8];
  
  iVar4 = sceNetAdhocPtpAccept(*(undefined4 *)(param_1 + 0x2c8),auStack_30,auStack_2a,0,1);
  iVar6 = *(int *)(param_1 + 0x2c4);
  if ((-1 < iVar4) && (iVar6 < 0x10)) {
    iVar6 = param_1 + iVar6 * 0x2c;
    puVar5 = (undefined1 *)FUN_08905810(auStack_28,auStack_30);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    *(undefined1 *)(iVar6 + 4) = *puVar5;
    uVar3 = puVar5[3];
    *(undefined1 *)(iVar6 + 5) = uVar1;
    uVar1 = puVar5[4];
    *(undefined1 *)(iVar6 + 6) = uVar2;
    uVar2 = puVar5[5];
    *(undefined1 *)(iVar6 + 7) = uVar3;
    *(undefined1 *)(iVar6 + 8) = uVar1;
    *(undefined1 *)(iVar6 + 9) = uVar2;
    *(int *)(iVar6 + 0xc) = iVar4;
    iVar6 = *(int *)(param_1 + 0x2c4) + 1;
    *(int *)(param_1 + 0x2c4) = iVar6;
  }
  iVar4 = 0;
  iVar7 = param_1 + 4;
  if (0 < iVar6) {
    do {
      FUN_089058d4(iVar7,param_2);
      iVar4 = iVar4 + 1;
      iVar7 = iVar7 + 0x2c;
    } while (iVar4 < *(int *)(param_1 + 0x2c4));
  }
  return 1;
}

