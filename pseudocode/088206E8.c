/* Entry 0x088206E8 | file offset 0x0001D6C0 | FUN_088206e8 | bytes 104 */

undefined4 FUN_088206e8(undefined1 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088206cc();
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    *param_1 = 1;
    iVar1 = FUN_08820750(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

