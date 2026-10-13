/* Entry 0x08931F14 | file offset 0x0012EEEC | FUN_08931f14 | bytes 236 */

void FUN_08931f14(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 uStackX_0)

{
  int iVar1;
  
  iVar1 = FUN_088bb88c(param_8);
  if (iVar1 != 0) {
    FUN_08932090(param_1,param_2,param_3,param_4,param_5,
                 *(undefined2 *)(&DAT_089cf3dc + (uint)*(byte *)(iVar1 + 0xf) * 2));
    FUN_08932238(param_1,param_6,param_7,*(undefined1 *)(iVar1 + 0xc),*(undefined1 *)(iVar1 + 0xd),
                 uStackX_0);
    *param_1 = 1;
  }
  return;
}

