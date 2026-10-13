/* Entry 0x088AEC54 | file offset 0x000ABC2C | FUN_088aec54 | bytes 752 */

void FUN_088aec54(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xef8) = 0;
    *(undefined4 *)(param_1 + 0xeac) = 0;
    *(undefined4 *)(param_1 + 0xeb0) = 0;
    *(undefined4 *)(param_1 + 0xeb4) = 0;
    *(undefined1 *)(param_1 + 0xefc) = 0;
    *(undefined1 *)(param_1 + 0xefd) = 0;
    *(undefined1 *)(param_1 + 0xec3) = 0;
    *(undefined1 *)(param_1 + 0xec4) = 0;
    *(undefined4 *)(param_1 + 0xeec) = 0;
    *(undefined4 *)(param_1 + 0xef0) = 0;
    iVar1 = FUN_08869ab4(param_2,"ICON0.PNG");
    *(undefined4 *)(param_1 + 0xec8) = *(undefined4 *)(iVar1 + 8);
    uVar2 = FUN_088820d8();
    *(undefined4 *)(param_1 + 0xecc) = uVar2;
    FUN_08935524(uVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(param_1 + 0xec8));
    iVar1 = FUN_08869ab4(param_2,"ICON0_NEW.PNG");
    *(undefined4 *)(param_1 + 0xed0) = *(undefined4 *)(iVar1 + 8);
    uVar2 = FUN_088820d8();
    *(undefined4 *)(param_1 + 0xed4) = uVar2;
    FUN_08935524(uVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(param_1 + 0xed0));
    iVar1 = FUN_08869ab4(param_2,"auto_save.gim");
    *(undefined4 *)(param_1 + 0xed8) = *(undefined4 *)(iVar1 + 8);
    uVar2 = FUN_088820d8();
    *(undefined4 *)(param_1 + 0xedc) = uVar2;
    FUN_08935524(uVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(param_1 + 0xed8));
    *(undefined4 *)(param_1 + 0xee4) = 0;
    local_2c = 0;
    iVar3 = FUN_0887b080(0x10);
    iVar1 = local_2c;
    if (iVar3 != 0) {
      FUN_0887a61c(iVar3);
      iVar1 = iVar3;
    }
    *(int *)(param_1 + 0xee0) = iVar1;
    iVar1 = FUN_08869ab4(param_2,"save_data.bin");
    uVar4 = *(undefined4 *)(param_1 + 0xee0);
    uVar5 = *(undefined4 *)(iVar1 + 4);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    uVar2 = FUN_088821c0();
    FUN_0887ac70(uVar4,uVar5,uVar6,uVar2);
    FUN_08935828(param_1 + 0x1e0,0,0x600);
    FUN_08935828(param_1 + 0x7e0,0,0x14);
    FUN_08935828(param_1 + 0x808,0,0x40);
    FUN_08935828(param_1,0,0x1a4);
    FUN_08935828(param_1 + 0x864,0,0xc);
    FUN_08935828(param_1 + 0x870,0,0x5a0);
    *(int *)(param_1 + 0x7f0) = param_1 + 0xe28;
    *(int *)(param_1 + 0x7b0) = param_1 + 0x7f4;
    *(int *)(param_1 + 0x7b4) = param_1 + 0x808;
    *(int *)(param_1 + 0x7b8) = param_1 + 0x848;
    *(int *)(param_1 + 0x7a4) = param_1 + 0x7e0;
    *(int *)(param_1 + 0x7d4) = param_1 + 0x864;
    *(int *)(param_1 + 0x240) = param_1;
    *(undefined4 *)(param_1 + 600) = 0x3ecc8;
    *(undefined4 *)(param_1 + 0x25c) = 0x3ecc8;
    *(int *)(param_1 + 0x254) = param_1 + 0xf08;
    *(undefined4 *)(param_1 + 0xef4) = 0;
    FUN_08935bb4(param_1 + 0x244,"DISSIDIA.BIN",0xd);
    FUN_08935524(param_1 + 0x7bc,&DAT_089cb358,0x10);
    *(undefined4 *)(param_1 + 0x864) = 0x14;
    *(int *)(param_1 + 0x86c) = param_1 + 0x870;
    FUN_088abe28(param_1);
    FUN_088adb10(param_1,param_1 + 0x1e0);
    *(undefined1 *)(param_1 + 0xec0) = 0;
    *(undefined4 *)(param_1 + 0xebc) = 1;
    local_30 = sceKernelCreateCallback("memory stick",FUN_088adf7c,0);
    sceIoDevctl("fatms0:",0x2415821,&local_30,4,0,0);
    sceRtcGetCurrentClockLocalTime(auStack_40);
    DAT_09b4d474 = local_34;
  }
  return;
}

