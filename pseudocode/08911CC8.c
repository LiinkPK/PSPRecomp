/* Entry 0x08911CC8 | file offset 0x0010ECA0 | FUN_08911cc8 | bytes 160 */

void FUN_08911cc8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  param_2[1] = param_4;
  param_2[2] = param_1;
  *(undefined1 *)(param_2 + 3) = 5;
  *(undefined1 *)((int)param_2 + 0xd) = 1;
  *(undefined1 *)((int)param_2 + 0xe) = 0;
  *(undefined1 *)((int)param_2 + 0xf) = 1;
  uVar1 = FUN_088daa40(param_3,2,0);
  *param_2 = uVar1;
  FUN_08911e80(param_2,param_5,param_6,param_7,param_8);
  return;
}

