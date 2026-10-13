/* Entry 0x088ADC08 | file offset 0x000AABE0 | FUN_088adc08 | bytes 480 */

void FUN_088adc08(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_a0 [128];
  
  uVar1 = FUN_0887afbc(*(undefined4 *)(param_1 + 0xee0),0,0);
  FUN_08935bb4(param_2,uVar1,0x80);
  iVar3 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0xee0);
  iVar2 = param_2 + 0x100;
  if (param_3 != 0) {
    uVar1 = FUN_0887afbc(uVar1,4,0);
    FUN_08935bb4(param_2 + 0x100,uVar1,0x400);
    iVar3 = FUN_089359e8(iVar2);
    FUN_08935bb4(iVar3 + param_2 + 0x100,param_3,0x400 - iVar3);
    iVar3 = FUN_089359e8(iVar2);
    FUN_08935bb4(iVar3 + param_2 + 0x100,&DAT_089cb434,0x400 - iVar3);
    iVar3 = FUN_089359e8(iVar2);
    uVar1 = *(undefined4 *)(param_1 + 0xee0);
  }
  uVar1 = FUN_0887afbc(uVar1,2,0);
  FUN_08935bb4(iVar3 + param_2 + 0x100,uVar1,0x400 - iVar3);
  iVar3 = FUN_089359e8(iVar2);
  FUN_0893fdcc(iVar3 + param_2 + 0x100,0x400 - iVar3,DAT_089d712c + 0x1fe08);
  iVar3 = FUN_089359e8(iVar2);
  FUN_08935bb4(iVar3 + param_2 + 0x100,&DAT_089cb434,0x400 - iVar3);
  iVar3 = FUN_089359e8(iVar2);
  uVar1 = FUN_0887afbc(*(undefined4 *)(param_1 + 0xee0),3,0);
  FUN_08935bb4(iVar3 + param_2 + 0x100,uVar1,0x400 - iVar3);
  iVar3 = FUN_089359e8(iVar2);
  FUN_088abaf4(param_1,auStack_a0,0x80,0xffffffff);
  FUN_0893fdcc(iVar3 + param_2 + 0x100,0x400 - iVar3,auStack_a0);
  *(undefined1 *)(param_2 + 0x500) = 5;
  *(undefined1 *)(param_2 + 0x501) = 7;
  return;
}

