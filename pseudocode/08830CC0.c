/* Entry 0x08830CC0 | file offset 0x0002DC98 | FUN_08830cc0 | bytes 172 */

void FUN_08830cc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  
  if ((*(int *)(param_1 + 0x300) != 0) &&
     ((*(short *)(param_1 + 0x180) == 1 || (*(short *)(param_1 + 0x180) == 2)))) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x544) + 0x134))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0x130));
    FUN_089a38e0(auStack_20,iVar1 + 0x100,param_1 + 0x100);
    uVar2 = FUN_08838300(param_1);
    FUN_08830954(uVar2,param_1 + 0x840,param_1 + 0x90,auStack_20);
    return;
  }
  FUN_08830938(param_1 + 0x840);
  return;
}

