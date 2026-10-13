/* Entry 0x0889586C | file offset 0x00092844 | FUN_0889586c | bytes 128 */

void FUN_0889586c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = FUN_089a04e8();
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *param_1;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (iVar2 == 0) break;
    (**(code **)(*(int *)(iVar2 + 8) + 0x1c))(iVar2 + *(short *)(*(int *)(iVar2 + 8) + 0x18));
  }
  FUN_0899fdc4(uVar1);
  return;
}

