/* Entry 0x088665F0 | file offset 0x000635C8 | FUN_088665f0 | bytes 380 */

void FUN_088665f0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = param_1 + 0x22c;
  FUN_08864c74(0x42200000,puVar2);
  FUN_08864c7c(0x47c35000,puVar2);
  FUN_08864c84(puVar2,0xff,0x80,0x80);
  iVar3 = 0;
  puVar2 = param_1;
  do {
    uVar1 = FUN_08882118(0x58400,0x80);
    *puVar2 = uVar1;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 2);
  FUN_0886603c(param_1);
  uVar1 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar1,0xffffffff,6000,FUN_08865ed0,"GRAPHICS::DlStartTask");
  uVar1 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar1,0xffffffff,90000,FUN_08865fd8,"GRAPHICS::DlFinishTask");
  uVar1 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar1,0xffffffff,5000,FUN_08865e98,"GRAPHICS::DlSendTask");
  FUN_088667dc(param_1,0x780000,0);
  FUN_088668c0(param_1);
  FUN_08940410(FUN_08866214,FUN_088662b4);
  FUN_089abf88(FUN_08866340,FUN_088663e0);
  FUN_089a01fc(1);
  return;
}

