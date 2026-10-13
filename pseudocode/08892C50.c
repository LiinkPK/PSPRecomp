/* Entry 0x08892C50 | file offset 0x0008FC28 | FUN_08892c50 | bytes 224 */

void FUN_08892c50(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_120 [256];
  
  iVar1 = FUN_0889716c(param_2);
  FUN_0893476c(auStack_120,"map/%s.gmo",iVar1 + 0x20);
  uVar2 = FUN_088fe7c8(auStack_120,0);
  uVar3 = FUN_0885c6cc(*param_1,uVar2,0x40,0,1,1);
  FUN_088fe708(auStack_120,uVar3,uVar2,0);
  FUN_08894f38(param_1 + 0x138,&DAT_089ca7a8,uVar3,uVar2);
  *(undefined1 *)(param_1 + 0x184) = 1;
  FUN_0885c538(*param_1,uVar3,0x40);
  (**(code **)(param_1[0x1cd] + 0xc))((int)param_1 + (int)*(short *)(param_1[0x1cd] + 8));
  return;
}

