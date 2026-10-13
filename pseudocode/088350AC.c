/* Entry 0x088350AC | file offset 0x00032084 | FUN_088350ac | bytes 136 */

undefined1 * FUN_088350ac(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x390) + 0x18) == 0) {
    param_3 = (undefined1 *)0x0;
  }
  else {
    do {
      param_3 = (undefined1 *)
                FUN_08811f44(*(undefined4 *)(*(int *)(param_1 + 0x390) + 0x18),param_2,param_3);
      if (param_3 == (undefined1 *)0x0) {
        return (undefined1 *)0x0;
      }
      iVar1 = FUN_08837d18(param_1,*param_3);
    } while (iVar1 == 0);
  }
  return param_3;
}

