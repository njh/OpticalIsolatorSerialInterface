# Optical Isolator Serial Interface
Arduino based Optical Isolator Serial Interface for EmonHub

## Configuring emonHub

There is information about how to configure emonHub here:
https://docs.openenergymonitor.org/emonhub/configuration.html

In the `[interfacers]` section add the following:

```
[[SerialDirect]]
     Type = EmonHubSerialInterfacer
      [[[init_settings]]]
           com_port = /dev/ttyUSB0
           com_baud = 9600
      [[[runtimesettings]]]
           pubchannels = ToEmonCMS,
```

And in the `[nodes]` section add the following:
```
[[99]]
    nodename = heatpump
    [[[rx]]]
       names = hotwater_status,
       datacodes = b,
```

`b` = byte, which is the smallest integer type, because it will only ever be 1 or 0.
