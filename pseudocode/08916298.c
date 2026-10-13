/* Entry 0x08916298 | file offset 0x00113270 | FUN_08916298 | bytes 140 */

void FUN_08916298(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_089110c4(0x6f4);
  *(int *)(param_1 + 0x570) = iVar1;
  iVar2 = 0;
  if (iVar1 != 0) {
    func_0x08b49890(iVar1);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x570) = iVar2;
  func_0x08b49914(iVar2,*(undefined4 *)(param_1 + 4),1,200);
  *(undefined1 *)(param_1 + 0x7e9) = 1;
  FUN_088823c4(*(undefined4 *)(param_1 + 4),1,200,FUN_089177b4,"CockpitMenuUpdate");
  return;
}

