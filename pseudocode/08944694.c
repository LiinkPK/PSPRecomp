/* Entry 0x08944694 | file offset 0x0014166C | FUN_08944694 | bytes 92 */

undefined4 FUN_08944694(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_089444b0(param_1,param_2,
                         *(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(param_2 + 0x18) + 0x44) + 4) + param_3 * 0xc))
    ;
  }
  return uVar1;
}

