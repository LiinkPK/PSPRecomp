/* Entry 0x08991158 | file offset 0x0018E130 | FUN_08991158 | bytes 308 */

void FUN_08991158(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x2c),1,0);
  uVar1 = FUN_089a5244();
  uVar7 = 1;
  uVar5 = 0;
  iVar6 = 0;
  iVar2 = DAT_089da420;
  do {
    uVar3 = uVar1 & uVar7;
    uVar7 = uVar7 << 1;
    if (((uVar3 != 0) && ((*(uint *)(iVar2 + iVar6 + 0x178) & 0x30) != 0)) &&
       (uVar3 = FUN_089a50a4(), iVar2 = DAT_089da420, (1 << (uVar5 & 0x1f) & uVar3) == 0)) {
      iVar4 = DAT_089da420 + iVar6;
      if (*(code **)(iVar4 + 0x1a0) == (code *)0x0) {
        *(undefined4 *)(iVar4 + 0x178) = 0;
      }
      else {
        (**(code **)(iVar4 + 0x1a0))(*(undefined4 *)(iVar4 + 0x1a4));
        iVar2 = DAT_089da420;
        iVar4 = DAT_089da420 + iVar6;
        *(undefined4 *)(iVar4 + 0x178) = 0;
      }
      *(undefined4 *)(iVar4 + 0x174) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x180) = 0;
      *(undefined4 *)(iVar4 + 0x184) = 0;
      *(undefined4 *)(iVar4 + 0x188) = 0;
      *(undefined4 *)(iVar4 + 0x18c) = 0;
      *(undefined4 *)(iVar4 + 400) = 0;
      *(undefined4 *)(iVar4 + 0x17c) = 0;
      *(undefined4 *)(iVar4 + 0x19c) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x1a0) = 0;
      *(undefined4 *)(iVar4 + 0x1a4) = 0;
      *(undefined1 *)(iVar4 + 0x1a8) = 0;
    }
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 0x3c;
  } while (uVar5 < 0x20);
  sceKernelSignalSema(*(undefined4 *)(iVar2 + 0x2c),1);
  return;
}

