/* Entry 0x08905728 | file offset 0x00102700 | FUN_08905728 | bytes 148 */

undefined4
FUN_08905728(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
            char param_5)

{
  int iVar1;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 auStack_16 [2];
  
  local_20 = param_4;
  iVar1 = sceNetAdhocPdpRecv(*param_1,&local_1c,auStack_16,param_3,&local_20,3000000,
                             param_5 != '\x01');
  if (iVar1 < 0) {
    local_20 = 0;
  }
  else {
    *param_2 = local_1c;
    param_2[1] = local_1b;
    param_2[2] = local_1a;
    param_2[3] = local_19;
    param_2[4] = local_18;
    param_2[5] = local_17;
  }
  return local_20;
}

