/* Entry 0x088DEF7C | file offset 0x000DBF54 | FUN_088def7c | bytes 116 */

undefined4 FUN_088def7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088def74();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      uVar2 = FUN_088deff0(param_1);
      iVar1 = FUN_088daa40(*(undefined4 *)(param_1 + 8),uVar2,0);
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 == 0) {
        return 0xfffffffe;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

