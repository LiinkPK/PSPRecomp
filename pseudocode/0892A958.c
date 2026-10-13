/* Entry 0x0892A958 | file offset 0x00127930 | FUN_0892a958 | bytes 368 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0892a958(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 local_80 [96];
  
  puVar7 = local_80;
  FUN_08883f78();
  FUN_08865088(param_1 + 0x100,0,0,FUN_0892aba0,"Update");
  uVar5 = FUN_0888204c(0x270800);
  *(undefined4 *)(param_1 + 0x138) = uVar5;
  uVar5 = FUN_0885c40c(uVar5,0x270800,"MULTI LOBBY CONTINUE",0x40);
  *(undefined4 *)(param_1 + 0x134) = uVar5;
  func_0x08a6d718(_DAT_08a6d7e0,uVar5);
  iVar4 = DAT_089d8364;
  if (DAT_089d8364 != 0) {
    iVar9 = *(int *)(DAT_089d8364 + 0x1644);
    uVar5 = *_DAT_08a6d7e0;
    iVar10 = *(int *)(DAT_089d8364 + 0x804);
    FUN_08993560(local_80,0x10,6,FUN_089057bc);
    iVar6 = 0;
    puVar8 = (undefined1 *)(iVar4 + 4);
    if (0 < iVar10) {
      do {
        uVar1 = puVar8[1];
        uVar2 = puVar8[2];
        *puVar7 = *puVar8;
        uVar3 = puVar8[3];
        puVar7[1] = uVar1;
        uVar1 = puVar8[4];
        puVar7[2] = uVar2;
        uVar2 = puVar8[5];
        puVar7[3] = uVar3;
        puVar7[4] = uVar1;
        puVar7[5] = uVar2;
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 6;
        puVar8 = puVar8 + 0x80;
      } while (iVar6 < iVar10);
    }
    if (iVar9 != 0) {
      iVar10 = 1;
    }
    func_0x08a6f998(uVar5,iVar9,iVar4 + 0xae8,*(undefined4 *)(param_1 + 0x134),local_80,iVar10,1);
  }
  return;
}

