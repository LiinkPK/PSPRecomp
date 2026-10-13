/* Entry 0x08915834 | file offset 0x0011280C | FUN_08915834 | bytes 296 */

undefined4 FUN_08915834(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (2 < param_2) {
    return 0;
  }
  pcVar2 = (char *)(param_3 + param_2 * 0x1c);
  cVar1 = *pcVar2;
  if (cVar1 != '\0') {
    if (cVar1 < '\x03') {
      if ('\0' < cVar1) {
        if (cVar1 < '\x02') {
          FUN_0893476c(param_1 + 0x770,"talkevent/%s.evex",pcVar2 + 4);
          FUN_08916f78(0,FUN_0891796c);
          return 0xffffffff;
        }
        FUN_0893476c(param_1 + 0x770,"talkevent/%s.evex",pcVar2 + 4);
        *(undefined1 *)(param_1 + 0x7d4) = 1;
        return 1;
      }
    }
    else {
      if (cVar1 < '\x04') {
        *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(pcVar2 + 4);
        *(undefined4 *)(param_1 + 0x764) = 3;
        FUN_08916f78(0,FUN_089177e4);
        return 0xfffffffe;
      }
      if (cVar1 < '\x05') {
        *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(pcVar2 + 4);
        FUN_08916f78(0,FUN_08917830);
        return 0xffffffff;
      }
    }
  }
  return 0;
}

