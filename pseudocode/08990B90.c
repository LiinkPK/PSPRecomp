/* Entry 0x08990B90 | file offset 0x0018DB68 | FUN_08990b90 | bytes 272 */

void FUN_08990b90(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x2c),1,0);
  uVar6 = 0;
  iVar5 = 0;
  iVar4 = DAT_089da420;
  do {
    iVar2 = iVar4 + iVar5;
    if ((*(uint *)(iVar2 + 0x178) & 0x40) != 0) {
      iVar1 = FUN_089913a0(iVar2 + 0x174);
      iVar4 = DAT_089da420;
      iVar2 = DAT_089da420 + iVar5;
      if (iVar1 == 0) {
        uVar3 = *(undefined4 *)(iVar2 + 0x180);
        FUN_089a50e0(uVar6,uVar3,uVar3,uVar3,*(undefined4 *)(iVar2 + 0x184));
        iVar2 = DAT_089da420 + iVar5;
        iVar4 = DAT_089da420;
      }
      else {
        *(uint *)(iVar2 + 0x178) = *(uint *)(iVar2 + 0x178) & 0xffffffbf;
        if (*(int *)(iVar2 + 0x180) < 1) {
          *(undefined4 *)(iVar2 + 0x178) = 2;
        }
      }
    }
    if ((*(uint *)(iVar2 + 0x178) & 0x30) != 0) {
      iVar1 = 7;
      if (*(uint *)(iVar2 + 0x17c) < 6) {
        iVar1 = *(uint *)(iVar2 + 0x17c) + 1;
      }
      *(int *)(iVar2 + 0x17c) = iVar1;
    }
    uVar6 = uVar6 + 1;
    iVar5 = iVar5 + 0x3c;
  } while (uVar6 < 0x20);
  sceKernelSignalSema(*(undefined4 *)(iVar4 + 0x2c),1);
  return;
}

