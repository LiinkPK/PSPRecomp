/* Entry 0x088AD574 | file offset 0x000AA54C | FUN_088ad574 | bytes 272 */

undefined8 FUN_088ad574(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  iVar2 = DAT_089d726c;
  uVar6 = 0;
  uVar5 = 0;
  piVar7 = &DAT_089d6f58;
  iVar3 = DAT_089d6f58;
  while (iVar3 != -1) {
    uVar4 = piVar7[1];
    bVar1 = false;
    if (uVar4 == 0xffffffff) {
      bVar1 = true;
    }
    else if ((*(uint *)(iVar2 + (uVar4 >> 5) * 4) & 1 << (uVar4 & 0x1f)) != 0) {
      bVar1 = true;
    }
    if (bVar1) {
      uVar8 = FUN_089985b0(1,0,iVar3);
      uVar6 = uVar6 | (uint)((ulonglong)uVar8 >> 0x20);
      uVar5 = uVar5 | (uint)uVar8;
    }
    piVar7 = piVar7 + 3;
    iVar3 = *piVar7;
  }
  return CONCAT44(uVar6,uVar5);
}

