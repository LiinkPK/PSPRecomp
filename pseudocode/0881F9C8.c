/* Entry 0x0881F9C8 | file offset 0x0001C9A0 | FUN_0881f9c8 | bytes 104 */

undefined4 FUN_0881f9c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0881f9ac();
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 8) = param_2;
    *(undefined1 *)(param_1 + 4) = 1;
    iVar1 = FUN_0881fa30(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

