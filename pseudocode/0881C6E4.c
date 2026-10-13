/* Entry 0x0881C6E4 | file offset 0x000196BC | FUN_0881c6e4 | bytes 328 */

undefined4 FUN_0881c6e4(char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((*param_1 != '\0') && (param_1[8] != '\x01')) &&
     (iVar1 = FUN_0881c68c(param_1,param_2), iVar1 != 0)) {
    iVar1 = 0;
    do {
      iVar1 = FUN_0881cb80(iVar1);
      if (iVar1 == 0) {
        if (((param_3 != 0) && (iVar1 = FUN_0883739c(param_3), iVar1 == 1)) &&
           (iVar1 = FUN_08816d54(param_1 + 0x14,param_2,param_3), iVar1 == 1)) {
          return 0;
        }
        return 1;
      }
    } while (((*(short **)(iVar1 + 0x48) == (short *)0x0) || (**(short **)(iVar1 + 0x48) != param_2)
             ) || ((*(int *)(iVar1 + 0x4c) == 0 ||
                   ((*(int *)(*(int *)(iVar1 + 0x4c) + 4) == 1 && (*(int *)(iVar1 + 0x10) != 2))))))
    ;
  }
  return 0;
}

